#include<stdio.h>//把输入的以联通的删除。 
#include<string.h>
const int INF=0x3f3f3f3f;

int mp[105][105],n,dis[105];
bool vis[105];
int res;
int prim(int x)
{
	dis[x]=0;
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
		res+=dis[u];
		vis[u]=1;

		for(int k=1; k<=n; k++)
		{
			if(vis[k]==0&&mp[u][k]<dis[k])
				dis[k]=mp[u][k];
		}
	}
}

int main(void)
{
	while(scanf("%d",&n)!=EOF)
	{
		for(int i=1; i<=n; i++)
		{
			for(int j=1; j<=n; j++)
			{
				scanf("%d",&mp[i][j]);
			}
		}
		int t,o,p;
		scanf("%d",&t);
		while(t--)
		{
			scanf("%d%d",&o,&p);
			mp[o][p]=mp[p][o]=0;
		}
		memset(dis,INF,sizeof(dis));
		memset(vis,0,sizeof(vis));
		prim(1);
		printf("%d\n",res);
		
		
	}


	return 0;
}





