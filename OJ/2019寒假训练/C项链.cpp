#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int maxn = 1e5+5;
const int INF = 0x3f3f3f3f;
struct unt{
    int a,b;
}mp[maxn];
bool cmp(unt a,unt b){
    return a.b>b.b;
}
int main() {
    int n,m;
    cin>>n>>m;
    for(int i=0;i<m;i++)
        cin>>mp[i].a;
    for(int i=0;i<m;i++)
        cin>>mp[i].b;
    sort(mp,mp+m,cmp);
    ll ans = 0,cnt=0;
    for(int i=0;i<m;i++){
        if(cnt>=n) break;
        if(cnt+mp[i].a <= n)
            ans+=mp[i].b*mp[i].a,cnt+=mp[i].a;
        else{
            ans+=mp[i].b*(n-cnt);
            break;
        }
    }
    cout<<ans<<endl;
    return 0;
}
