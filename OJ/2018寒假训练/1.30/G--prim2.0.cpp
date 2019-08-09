#include<stdio.h>
#include<string.h>
int m,n;
int mp[1050][1050],dis[1050];
bool vis[1050];
int kij()
{
	dis[1]=0;
	for(int i=1; i<=n; i++)
	{
		dis[i]=mp[1][i];
	}
	vis[1]=1;
	int res=0;
	for(int i=1; i<n; i++)
	{
		int min=0,u=-1;
		for(int j=1; j<=n; j++)
		{
			if(vis[j]==0&&dis[j]>min)
			{
				min=dis[j];
				u=j;
			}
		}
		if(u==-1) return -1;

		vis[u]=1;
		res+=min;
		for(int k=1; k<=m; k++)
		{
			if(vis[k]==0&&mp[u][k]>dis[k])
				dis[k]=mp[u][k];
		}
	}
	return res;
}
int main(void)
{
	scanf("%d%d",&n,&m);
	memset(vis,0,sizeof(vis));
	memset(dis,0,sizeof(dis));
	for(int i=1; i<=n; i++)
		for(int j=1; j<=n; j++)
			mp[i][j]=0;
	int from,to,w;
	for(int i=1; i<=m; i++)
	{
		scanf("%d%d%d",&from,&to,&w);
		if(w>mp[from][to])
			mp[from][to]=mp[to][from]=w;
	}
	printf("%d\n",kij());
	return 0;
}
