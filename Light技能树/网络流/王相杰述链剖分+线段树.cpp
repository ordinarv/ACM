// luogu-judger-enable-o2
//#pragma comment(linker, "/STACK:1024000000,1024000000")
  
#include<stdio.h>
#include<string.h> 
#include<math.h> 
   
#include<map>  
#include<set>
#include<deque> 
#include<queue> 
#include<stack> 
#include<bitset>
#include<string> 
#include<fstream>
#include<iostream> 
#include<algorithm> 
using namespace std; 
  
#define ll long long 
#define Pair pair<int,int>
//#define max(a,b) (a)>(b)?(a):(b)
//#define min(a,b) (a)<(b)?(a):(b)
#define clean(a,b) memset(a,b,sizeof(a))// ??
//std::ios::sync_with_stdio(false);
//  register
const int MAXN=1e5+10;
const int INF32=0x3f3f3f3f;
const ll INF64=0x3f3f3f3f3f3f3f3f;
const ll mod=1e9+7;
const double PI=acos(-1.0);
const double EPS=1.0e-8;
 
class Segment{
    ll Sum[MAXN<<2],Lazy[MAXN<<2];
    ll LColor[MAXN<<2],RColor[MAXN<<2];
    
    void PushUp(int l,int r,int rt){//将该节点更新为剩下的节点 
        Sum[rt]=Sum[rt<<1]+Sum[rt<<1|1];
        LColor[rt]=LColor[rt<<1];
        RColor[rt]=RColor[rt<<1|1];
        if(RColor[rt<<1]==LColor[rt<<1|1]){
            Sum[rt]--;
        }
    }
    void PushDown(int l,int r,int rt){
        if(Lazy[rt]){
            Sum[rt<<1]=Sum[rt<<1|1]=1;
            Lazy[rt<<1]=Lazy[rt<<1|1]=Lazy[rt];
            LColor[rt<<1]=RColor[rt<<1]=LColor[rt<<1|1]=RColor[rt<<1|1]=Lazy[rt];
            Lazy[rt]=0;
        }
    }
    public:
        void Build(int l,int r,int rt,ll A[]){
            if(l==r){
                Sum[rt]=1;Lazy[rt]=0;
                LColor[rt]=RColor[rt]=A[l];
                return ;
            }
            int mid=(l+r)>>1;
            Build(l,mid,rt<<1,A);Build(mid+1,r,rt<<1|1,A);
            PushUp(l,r,rt);
        }
        void Update(int ql,int qr,ll val,int l,int r,int rt){
            if(ql<=l&&r<=qr){
                Sum[rt]=1;Lazy[rt]=val;
                LColor[rt]=RColor[rt]=val;
                return ;
            }
            PushDown(l,r,rt);
            int mid=(l+r)>>1;
            if(ql<=mid) Update(ql,qr,val,l,mid,rt<<1);
            if(qr>mid) Update(ql,qr,val,mid+1,r,rt<<1|1);
            PushUp(l,r,rt);
        }
        ll Query(int ql,int qr,int l,int r,int rt){
            if(ql<=l&&r<=qr) return Sum[rt];
            PushDown(l,r,rt);
            int mid=(l+r)>>1;
            if(ql<=mid){
                ll res=0;
                res+=Query(ql,qr,l,mid,rt<<1);
                if(qr>mid){
                    res+=Query(ql,qr,mid+1,r,rt<<1|1);
                    if(RColor[rt<<1]==LColor[rt<<1|1]) res--;
                }
                return res;
            }
            return Query(ql,qr,mid+1,r,rt<<1|1);
        }
        ll QueryColor(int ql,int qr,int l,int r,int rt){
            if(ql<=l&&r<=qr){
                return LColor[rt];
            }
            PushDown(l,r,rt);
            int mid=(l+r)>>1;
            if(ql<=mid) return QueryColor(ql,qr,l,mid,rt<<1);
            return QueryColor(ql,qr,mid+1,r,rt<<1|1);
        } 
        void Show(int l,int r,int rt){
            printf("l=%d r=%d : \nSum[rt]=%lld Lazy[rt]=%lld LColor[rt]=%lld RColor[rt]=%lld\n",l,r,Sum[rt],Lazy[rt],LColor[rt],RColor[rt]);
            if(l==r) return ;
            int mid=(l+r)>>1;
            Show(l,mid,rt<<1);Show(mid+1,r,rt<<1|1);
        }
};
 
struct Node1{
    int v,nxt;
    Node1(int _v=0,int _nxt=0){
        v=_v;nxt=_nxt;
    }
};
Segment Seg;
Node1 Edge[MAXN<<2];
int Head[MAXN],Ecnt;
int Deep[MAXN],Fa[MAXN],Size[MAXN],Son[MAXN];
int Idx[MAXN],Icnt;
int Top[MAXN];
ll A[MAXN],B[MAXN];
int n,m;
 
void Intt(){
    clean(Head,-1);Ecnt=0;
    clean(Deep,0);clean(Fa,-1);
    clean(Size,0);clean(Son,-1);
    Icnt=0;
}
void AddEdge(int u,int v){
    Edge[Ecnt]=Node1(v,Head[u]);
    Head[u]=Ecnt++;
}
int DFS1(int u,int fa,int dep){
    Deep[u]=dep;Fa[u]=fa;Size[u]=1;
    int maxson=-1;
    for(int i=Head[u];i+1;i=Edge[i].nxt){
        int temp=Edge[i].v;
        if(temp==fa) continue;
        Size[u]+=DFS1(temp,u,dep+1);
        if(Size[temp]>maxson){
            maxson=Size[temp];Son[u]=temp;
        }
    }return Size[u];
}
void DFS2(int u,int topfa){
    Idx[u]=++Icnt;Top[u]=topfa;B[Idx[u]]=A[u];
    if(Son[u]==-1) return ;
    DFS2(Son[u],topfa);
    for(int i=Head[u];i+1;i=Edge[i].nxt){
        int temp=Edge[i].v;
        if(Idx[temp]==0){
            DFS2(temp,temp);
        }
    }
}
void UpdatePath(int l,int r,ll val){
    while(Top[l]!=Top[r]){
        if(Deep[Top[l]]<Deep[Top[r]]) swap(l,r);
        Seg.Update(Idx[Top[l]],Idx[l],val,1,n,1);
        l=Fa[Top[l]];
    }
    if(Deep[l]>Deep[r]) swap(l,r);
    Seg.Update(Idx[l],Idx[r],val,1,n,1);
}
ll QueryPath(int l,int r){
    ll ans=0;
    while(Top[l]!=Top[r]){
        if(Deep[Top[l]]<Deep[Top[r]]) swap(l,r);
        ll res=ans;
//		printf("Q:%d~%d +%lld\n",Idx[Top[l]],Idx[l],Seg.Query(Idx[Top[l]],Idx[l],1,n,1));
        ans+=Seg.Query(Idx[Top[l]],Idx[l],1,n,1);
//		printf("FaColor:%lld RColor:%lld\n",Seg.QueryColor(Idx[Fa[Top[l]]],Idx[Fa[Top[l]]],1,n,1),Seg.QueryColor(Idx[Top[l]],Idx[Top[l]],1,n,1));
        if(Seg.QueryColor(Idx[Fa[Top[l]]],Idx[Fa[Top[l]]],1,n,1)==Seg.QueryColor(Idx[Top[l]],Idx[Top[l]],1,n,1)) ans--;
        l=Fa[Top[l]];
//        cout<<"差值:"<<ans-res<<endl;
    }
    if(Deep[l]>Deep[r]) swap(l,r);
//	printf("Q:%d~%d +%lld\n",Idx[l],Idx[r],Seg.Query(Idx[l],Idx[r],1,n,1));
    ans+=Seg.Query(Idx[l],Idx[r],1,n,1);
    return ans;
}
int main(){
    Intt();
    scanf("%d%d",&n,&m);
    for(int i=1;i<=n;++i){
        scanf("%lld",&A[i]);
    }
    for(int i=1;i<n;++i){
        int a,b;scanf("%d%d",&a,&b);
        AddEdge(a,b);AddEdge(b,a);
    }DFS1(1,-1,1);DFS2(1,1);
//	for(int i=1;i<=n;++i){
//		printf("i=%d : Idx[i]=%d\n",i,Idx[i]);
//	}printf("\n");
    Seg.Build(1,n,1,B);
//	Seg.Show(1,n,1);printf("\n");
    for(int i=1;i<=m;++i){
        char oper[5];scanf("%s",&oper);
        if(oper[0]=='C'){
            int a,b;ll c;scanf("%d%d%lld",&a,&b,&c);
            UpdatePath(a,b,c);
        }
        else{
            int a,b;scanf("%d%d",&a,&b);
            printf("%lld\n",QueryPath(a,b));
        }
//		Seg.Show(1,n,1);printf("\n");
    }
}
 
/*
6 1
4 1 5 1 2 4 
4 2
5 6
4 6
1 4
2 3
Q
3 1 
*/
