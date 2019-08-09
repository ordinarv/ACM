#include<stdio.h>
#include<string.h>
const int INF=0x3f3f3f3f;
int n,m;
int mp[1010][1010],dis[1010];
bool vis[1010];

void init()
{
	memset(vis,0,sizeof(vis));
	//memset(dis,-INF,sizeof(dis));
	memset(mp,-INF,sizeof(mp));
	for(int i=1; i<=n; i++)
		mp[i][i]=0;
}

void prim()
{

	int ans=0;
	for(int i=1; i<=n; i++)
		dis[i]=mp[1][i];
	vis[1]=1;
	for(int i=2; i<=n; i++)
	{
		int max=-INF,u=-1;
		for(int j=1; j<=n; j++)
		{
			if(vis[j]==0&&dis[j]>max)
			{
				max=dis[j];
				u=j;
			}
		}
		if(u==-1)
		{
			printf("-1\n");
			return;
		}
		ans+=max;
		vis[u]=1;
		for(int k=1; k<=n; k++)
		{
			if(vis[k]==0&&mp[u][k]>dis[k])
				dis[k]=mp[u][k];
		}
	}
	printf("%d\n",ans);

}
int main(void)
{
	while(scanf("%d%d",&n,&m)!=EOF)
	{
		int from,to,w;
		init();
		for(int i=1; i<=m; i++)
		{
			scanf("%d%d%d",&from,&to,&w);
			if(mp[from][to]<w)
				mp[from][to]=mp[to][from]=w;

		}

		prim();
	}





	return 0;
}





