#include<bits/stdc++.h>
using namespace std;
const int maxn = 1e7+5;
const int maxm = 300;
char s[maxn];
int n;
bool vis[maxn];
void work(){
	int start=0,end=0,ans=1,ts=0,te=0;;
	for(int i=0;i<n;i++){
		cout<<"i"<<"  "<<i<<"\n";
		if(vis[s[i]]>=1 && i!=n-1){
			te = i-1;
			i = vis[s[i]] + 1;
			if(ans<te-ts+1){
				ans = te - ts + 1;			
				start = ts,end = te;
			}
			ts = i;
			memset(vis,0,sizeof(vis));
		}
		else if(i == n-1){
			if(vis[s[i]]>=1) {
				ans = i-1 - ts + 1;
				start = ts, end = i-1;
				break;
			}
			te = i;
			if(ans<te-ts+1){
				ans = te - ts + 1;
				start = ts,end = te;
			}
		}
		vis[s[i]] = i;
	}
	cout<<ans<<' '<<start<<' '<<end<<endl;
}
int main() {
	freopen("test.txt","r",stdin);
	while(cin>>n) {
		scanf("%s",s);
		work();
	}
	return 0;
}
