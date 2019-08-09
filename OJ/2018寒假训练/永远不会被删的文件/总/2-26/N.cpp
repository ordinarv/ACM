#include<iostream>

using namespace std;
const int INF=0x3f3f3f3f;

int mp[40010][40010],d[40010],vis[40010];
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int n,m;
		cin>>n>>m;
		memset(mp,INF,sizeof(mp));
		memset(vis,0,sizeof(vis));
		memset(d,INF,sizeof(d));
		for(int i=1;i<n;i++)
		{
			cin>>from>>to>>w;
			mp[from][to]=mp[to][from]=w;
			mp[i][i]=0;
		}
		mp[n][n]=0;
		int j,k;
		for(int i=0;i<m;i++)
		{
			cin>>j>>k;	
			prim
		
		
		}	
		
		
		
	}
	
	
	
	
	
	return 0;
}


