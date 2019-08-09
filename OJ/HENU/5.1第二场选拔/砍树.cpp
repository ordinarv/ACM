#include<iostream>
#include<algorithm>
using namespace std;
typedef long long ll;
const int maxn=200000;
ll a[maxn+5],h[maxn+5],s,l;
int n; 
bool check(ll x){
	ll res=0;
	for(int i=0;i<n;i++){
		if(h[i]+a[i]*x>=l)
			res+=h[i]+a[i]*x;	
	}
	return res>=s;
}
int main()
{
	cin>>n>>s>>l;
	ll maxr=1e18,ans;
	for(int i=0;i<n;i++)
		cin>>h[i];	
	for(int i=0;i<n;i++){
		cin>>a[i];	
		maxr=min(maxr,max((s-h[i])/a[i]+1,(l-h[i])/a[i]+1));//处理上界 		
	}
	ll r=maxr,l=0,mid;
	while(l<=r){
		mid=(r-l)/2+l;
		if(check(mid)){
			r=mid-1;ans=mid;
		}	
		else
			l=mid+1;	
	}
	cout<<ans<<endl;
	return 0;
}
