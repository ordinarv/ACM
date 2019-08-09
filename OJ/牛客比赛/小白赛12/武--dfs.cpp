#include<iostream>
#include<algorithm>
#include<cstring>
const int INF=0x3f3f3f3f;
using namespace std;
int n;
int mp[100010][100010],dis[100010],vis[100010];
void dfs(int x){
	vis[x]=1;
	for(int i=1;i<=n;i++){//n ci end
		if(mp[x][i]!=0&&!vis[i]){
			dis[i]=mp[x][i]+dis[x];		
			dfs(i);
		}		
	}	
}
int main(){

		int p,k,x,y,z;
		cin>>n>>p>>k;
		memset(mp,0,sizeof(mp));
		memset(vis,0,sizeof(vis));
		memset(dis,0,sizeof(dis));
		for(int i=1;i<n;i++){
			cin>>x>>y>>z;	
			mp[x][y]=mp[y][x]=z;
		}
		dfs(p);
		sort(dis+1,dis+n+1); 
		cout<<dis[k+1]<<endl;
	return 0;
}
