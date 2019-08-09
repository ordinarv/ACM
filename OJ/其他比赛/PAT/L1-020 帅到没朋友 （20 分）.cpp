#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int maxn = 1e5+5;
int f[maxn],vis[maxn];
void init(){
	for(int i=0;i<100000;i++){
		f[i] = i;
	}
}
int find(int x){
	return x==f[x]?x:f[x]=find(f[x]);
}
void join(int x,int y){
	int fx=find(x),fy = find(y);
	if(fx!=fy) {
		f[fx]=fy; 
		vis[fx] = 1;
		vis[fy] = 1;
	}
}
int main() {
	int n,k,x,y;
	init();
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&k);
		scanf("%d",&x);
		for(int j=1;j<k;j++){
			scanf("%d",&y);
			join(x,y);
			x = y;
		}
	}
	int q;
	vector<int> ans;
	scanf("%d",&q);
	for(int i=0;i<q;i++){
		scanf("%d",&x);
		if(f[x] == x && !vis[x] && find(ans.begin(),ans.end(),x) == ans.end())
			ans.push_back(x);
	}	
	//memset(vis,0,sizeof(vis));
	//vector<int>::iterator it=ans.begin();
	if(ans.size() == 0) {
		printf("No one is handsome\n"); return 0;
	}
	printf("%05d",ans[0]);
	for(int i=1;i<ans.size();i++){
		printf(" %05d",ans[i]);
	}
	
	return 0;
}
