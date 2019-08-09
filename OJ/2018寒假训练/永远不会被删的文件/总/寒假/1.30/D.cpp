#include<stdio.h>
#include<string.h>
const int INF=0x3f3f3f3f;
int mp[205][205],dis[205];
bool vis[205];
int m,n,q,z;

int prim()
{
	dis[q]=0;
	for(int i=0;i<n;i++)
	{
		int min=INF,u;
		for(int j=0;j<n;j++)
		{
			if(vis[j]==0&&dis[j]<min)
			{
				min=dis[j];
				u=j;
			}	
		}
		
		vis[u]=1;
		for(int k=0;k<n;k++)
		{
			if(vis[k]==0&&mp[u][k]+min<dis[k])
				dis[k]=mp[u][k]+min;
		}
	}
	return dis[z];
	
	
}
int main(void)
{
	while(scanf("%d%d",&n,&m)!=EOF)
	{
		memset(mp,INF,sizeof(mp));
		
		int from,to,w;
		for(int i=0;i<m;i++)	
		{
			scanf("%d%d%d",&from,&to,&w);
			if(mp[from][to]>w)
				mp[from][to]=mp[to][from]=w;
		}
		for(int i=0;i<n;i++)
			mp[i][i]=0;
		memset(vis,0,sizeof(vis));
		memset(dis,INF,sizeof(dis));
		scanf("%d%d",&q,&z);
		int ans=prim();
		if(ans==INF)
			printf("-1\n");
		else	
			printf("%d\n",ans);
	
			
	}
		
	return 0;
}
