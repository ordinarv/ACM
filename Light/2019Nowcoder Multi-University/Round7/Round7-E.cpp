#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int maxn = 4e5+5;
ll a1,a2,b1,b2,c1,c2,m1,m2,x[maxn],y[maxn];
vector<ll> ve;

void push_down(int k1){
	
}
void update(int k1,int l,int r,int L,int R){
	if(L<=l&&r<=R){
		sum[k1] += (ve[r]-ve[l-1])*f;
		lazy[k1] += 1;
		return ;
	}
	int m = (l+r)>>1;
	if(lazy[k1]){
		lazy[k1>>1] = 
	}
}
void query(int k1,int l,int r,ll k){
	
	
}
int main(){
	int n;
	scanf("%d",&n);
	scanf("%d%d%d%d%d%d",&x[1],&x[2],&a1,&b1,&c1,&m1);
	scanf("%d%d%d%d%d%d",&y[1],&y[2],&a2,&b2,&c2,&m2);
	for(int i=3;i<=n;i++){
		x[i] = (a1*x[i-1]+b1*x[i-2]+c1)%m1;
		y[i] = (a2*y[i-1]+b2*y[i-2]+c2)%m2;
	}
	for(int i=1;i<=n;i++){
		x[i]++,y[i]++;
		if(x[i] > y[i]) swap(x[i],y[i]);//x[i] = l,y[i] = r; 
		ve.push_back(x[i]);
		ve.push_back(y[i]+1);		
	}
	sort(ve.begin(),ve.end());
	ve.erase(unique(ve.begin(),ve.end()),ve.end());
	ll sum = 0;
	int cnt = ve.size();
	/*for(int i=0;i<cnt;i++){
        printf("ve[%d] = %d\n",i,ve[i]);
    }*/
    for(int i=1;i<=n;i++){
    	sum += (y[i]-x[i]+1);//当前数组所添加的数字总个数
    	x[i] = lower_bound(ve.begin(),ve.end(),x[i])-ve.begin();
    	y[i] = lower_bound(ve.begin(),ve.end(),y[i]+1)-ve.begin();
    	update(0,cnt-1,1,x[i],y[i]-1);
    	printf("%lld\n",query(0,cnt-1,1,(sum+1)/2));
	}
	return 0;
} 
/*
#include<bits/stdc++.h>
#define lson rt<<1
#define rson rt<<1|1
#define rep(i,a,b) for(int i=(int)a;i<=(int)b;i++)
using namespace std;
typedef pair<int,int> pii;
typedef long long ll;
const int maxn=400005;
ll x[maxn],y[maxn],A1,A2,B1,B2,C1,C2,M1,M2;
ll sz[maxn*6],laz[maxn*6];
vector<ll> ve;
void deal(int rt,int l,int r,ll f){
    sz[rt]+=(ve[r+1]-ve[l])*f;
	laz[rt]+=f;
}
 
void update(int l,int r,int rt,int ql,int qr){
    if(ql<=l&&r<=qr){
        deal(rt,l,r,1);
        return ;
    }
    int mid=(r+l)/2;
    if(laz[rt]){
        deal(lson,l,mid,laz[rt]);
        deal(rson,mid+1,r,laz[rt]);
        laz[rt]=0;
    }
    if(ql<=mid) update(l,mid,lson,ql,qr);
    if(qr>mid) update(mid+1,r,rson,ql,qr);
    sz[rt]=sz[lson]+sz[rson];
}
ll query(int l,int r,int rt,ll va){
    if(l==r){
        int ti=sz[rt]/(ve[l+1]-ve[l]);
        return ve[l]+(va-1)/ti;
    }
    int mid=(r+l)/2;
    if(laz[rt]){
        deal(lson,l,mid,laz[rt]);
        deal(rson,mid+1,r,laz[rt]);
        laz[rt]=0;
    }
    if(sz[lson]>=va) return query(l,mid,lson,va);
    else return query(mid+1,r,rson,va-sz[lson]);
}
int main(){
    int n;
    scanf("%d",&n);
    scanf("%lld%lld%lld%lld%lld%lld",&x[1],&x[2],&A1,&B1,&C1,&M1);
    scanf("%lld%lld%lld%lld%lld%lld",&y[1],&y[2],&A2,&B2,&C2,&M2);
    rep(i,3,n){
        x[i]=(A1*x[i-1]+B1*x[i-2]+C1)%M1;
        y[i]=(A2*y[i-1]+B2*y[i-2]+C2)%M2;
    }
    rep(i,1,n){
        x[i]++,y[i]++;
        if(x[i]>y[i]) swap(x[i],y[i]);
        ve.push_back(x[i]); ve.push_back(y[i]+1);
    }
    sort(ve.begin(),ve.end());
    ve.erase(unique(ve.begin(),ve.end()),ve.end());
    ll sum=0;
    int cnt=ve.size();
    /*for(int i=0;i<cnt;i++){
        printf("ve[%d] = %d\n",i,ve[i]);
    }*/
    rep(i,1,n){
        sum+=(y[i]-x[i]+1);
        x[i]=lower_bound(ve.begin(),ve.end(),x[i])-ve.begin();
        y[i]=lower_bound(ve.begin(),ve.end(),y[i]+1)-ve.begin();
        update(0,cnt-1,1,x[i],y[i]-1);
        printf("%lld\n",query(0,cnt-1,1,(sum+1)/2));
    }
    return 0;
}
/*
2
3 5 1 1 1 1
9 12 1 1 1 1
*/
*/
