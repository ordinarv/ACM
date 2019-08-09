#include<bits/stdc++.h>
using namespace std;

const int maxn = 2e5+5;
const int INF = 0x3f3f3f3f;
int vis[maxn];
struct unt{
	int id,pri;
}last[maxn];
bool cmp(unt a,unt b){
	return a.pri<b.pri;
}
int main(){
	long long ans = 0;
	int n,k,a[maxn],b[maxn];
	cin>>n>>k;
	
	for(int i=0;i<n;i++){
		cin>>a[i];
		vis[i] = 1;
	}		
	for(int i=0;i<n;i++)
		cin>>b[i];	
	int kk=0,cnt =0 ;
	for(int i=0;i<n;i++){
		if(a[i]<b[i]) {
			ans+=a[i];vis[i] = 0;kk++;
		}
		else {
			last[cnt].id = i;last[cnt++].pri = a[i]-b[i];
		}	
	}	
	if(kk<k){
		sort(last,last+cnt,cmp);
		for(int i=0;i<(k-kk);i++){
			ans+=a[last[i].id];
			vis[last[i].id] = 0;
		}
	} 
	for(int i=0;i<n;i++){
		if(vis[i])
			ans+=b[i];
	}
	cout<<ans<<endl;
	return 0;
	
}
