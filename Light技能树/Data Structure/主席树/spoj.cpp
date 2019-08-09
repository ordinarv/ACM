#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int maxn=30005;
struct node{
    int l,r,sum;
}T[maxn*40];
int n,q,a[maxn],cnt,root[maxn],pos[1000005];
void update(int &now,int pre,int val,int l,int r,int pos){
    T[++cnt]=T[pre],T[cnt].sum+=val,now=cnt;
    if(l==r) return;
    int mid=l+r>>1;
    if(pos<=mid) update(T[now].l,T[pre].l,val,l,mid,pos);
    else update(T[now].r,T[pre].r,val,mid+1,r,pos);
}
int query(int L,int R,int l,int r,int rt){
    if(L<=l&&R>=r) return T[rt].sum;
    int ans=0,mid=l+r>>1;
    if(L<=mid) ans+=query(L,R,l,mid,T[rt].l);
    if(R>mid) ans+=query(L,R,mid+1,r,T[rt].r);
    return ans;
}
int main(){
    scanf("%d",&n);
    for(int i=1;i<=n;i++) scanf("%d",&a[i]);
    for(int i=1;i<=n;i++){
        if(pos[a[i]]){
            update(root[i],root[i-1],-1,1,n,pos[a[i]]);
            update(root[i],root[i],1,1,n,i);
        }else update(root[i],root[i-1],1,1,n,i);
        pos[a[i]]=i;
    } 
    scanf("%d",&q);
    while(q--){
        int l,r;
        scanf("%d%d",&l,&r);
        printf("%d\n",query(l,r,1,n,root[r]));
    }
    return 0;
}
