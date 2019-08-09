#include<stdio.h>//把输入的以联通的删除。 
#include<string.h>
const int INF=0x3f3f3f3f;

int mp[1005][1005],n,dis[1005],d[1005];
bool vis[1005];
int res;
int prim(int x)
{
	dis[x]=d[x];
	res=0;
	for(int i=1; i<=n; i++)
	{
		int min=INF,u;
		for(int j=1; j<=n; j++)
		{

			if(vis[j]==0&&dis[j]<min)
			{
				min=dis[j];
				u=j;
			}
		}
		res=res+dis[u]+d[u];
		vis[u]=1;

		for(int k=1; k<=n; k++)
		{
			if(vis[k]==0&&mp[u][k]+d[u]<dis[k]) 
				dis[k]=mp[u][k];
		}
	}
}

int main(void)
{
	int T;
	scanf("%d",&T);
	while(T--)
	{
		scanf("%d",&n);
		for(int k=1; k<=n; k++)	
			scanf("%d",&d[k]);
		for(int i=1; i<=n; i++)
		{
			for(int j=1; j<=n; j++)
			{
				scanf("%d",&mp[i][j]);
			}
		}
	
		memset(dis,INF,sizeof(dis));
		memset(vis,0,sizeof(vis));
		prim(1);
		printf("%d\n",res);
		
		
	}


	return 0;
}





