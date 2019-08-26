#include<bits/stdc++.h>
using namespace std;
const int maxn = 1e7+5;
const int maxm = 300;
char s[maxn];
int n;
int pos[maxm];
void work(){
	memset(pos,0,sizeof(pos));
	int start=1,end=0,ans=1,ts=1,te=0;;
	for(int i=1;i<=n;i++){
		if(pos[s[i]]){
			cout<<"I"<<i<<endl;
			te = i-1;
			int tmp = te-ts+1;
			if(ans < tmp){
				ans = tmp;
				start = ts,end = te;
			}
			ts = pos[s[i]]+1;		
		}	 
		else if(i==n){
			te = i;
			int tmp = te-ts+1;
			if(ans < tmp){
				ans = tmp;
				start = ts,end = te;
			}
		}	
		pos[s[i]] = i;
		cout<<i<<" "<<pos[s[i]]<<endl;
	}
	printf("%d %d %d\n",ans,start-1,end-1);
}
int main() {
	freopen("test.txt","r",stdin);
	while(~scanf("%d",&n)) {
		scanf("%s",s+1);
		work();
	}
	return 0;
}

