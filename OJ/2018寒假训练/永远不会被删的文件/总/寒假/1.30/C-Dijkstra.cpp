#include<stdio.h>
#include<string.h>
const int INF=0x3f3f3f3f;
int mp[105][105],dis[105];
bool vis[105];
int n,m;

int prim()
{
	dis[1]=0;
	for(int i=1;i<=n;i++)
	{
		int min=INF,u;
		for(int j=1;j<=n;j++)
		{
			if(vis[j]==0&&dis[j]<min)
			{
				min=dis[j];
				u=j;
			}	
		}
		
		vis[u]=1;
		for(int k=1;k<=n;k++)
		{
			if(vis[k]==0&&mp[u][k]+min<dis[k])
				dis[k]=mp[u][k]+min;
		}
	}
	return dis[n];
	
	
}
int main(void)
{
	while(scanf("%d%d",&n,&m))
	{
		if(n==0&&m==0)break;
		memset(mp,INF,sizeof(mp));
		
		int from,to,w;
		for(int i=0;i<m;i++)	
		{
			scanf("%d%d%d",&from,&to,&w);
				mp[from][to]=mp[to][from]=w;
		}
		for(int i=1;i<=n;i++)
			mp[i][i]=0;
		memset(vis,0,sizeof(vis));
		memset(dis,INF,sizeof(dis));
		int ans=prim();
		printf("%d\n",ans);
	
			
	}
		
	return 0;
}
