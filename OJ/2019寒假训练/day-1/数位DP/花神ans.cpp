#include<bits/stdc++.h>
#define maxn 51
#define ll long long
using namespace std;

int x[maxn],cnt=0;
ll f[maxn][2][maxn][maxn],ans[maxn],n,p=1e7+7;
ll pw(ll a,ll b){
    ll ret=1;
    while(b)
        ret=ret*(b&1?a:1)%p,a=a*a%p,b>>=1;
    return ret;
}
ll _f(int cur,int up,int tmp,int d){
//从二进制高位到低位填，cur表示该填第几位，up表示是否顶着上界，tmp表示当前填了几个1，d表示总的1的个数。
    if(!cur)
        return tmp==d;
    if(~f[cur][up][tmp][d])
        return f[cur][up][tmp][d];
    int lim=up?x[cur]:1;
    ll ret=0;
    for(int i=0;i<=lim;i++)
        ret+=_f(cur-1,up&&i==lim,tmp+(i==1),d);
    return f[cur][up][tmp][d]=ret;
}
ll solve(){
    while(n)
        x[++cnt]=n&1,n>>=1;
    for(int i=1;i<=50;i++)
        memset(f,-1,sizeof(f)),ans[i]=_f(cnt,1,0,i);
    ll ret=1;
    for(int i=1;i<=50;i++)
        ret=ret*pw(i,ans[i])%p;
    return ret;
}
int main(){
    scanf("%lld",&n);
    printf("%lld\n",solve());
    return 0;
} 
