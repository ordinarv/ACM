#include<stdio.h>
#include<string.h>
double mp[1005][1005],dis[1005];
bool vis[1005];
int m,n,q,z;

double prim()
{
	memset(vis,0,sizeof(vis));
	memset(dis,0,sizeof(dis));
	dis[q]=1;
	for(int i=0; i<n; i++)
	{
		int u;
		double min=0;
		for(int j=1; j<=n; j++)
		{
			if(vis[j]==0&&dis[j]>min)
			{
				min=dis[j];
				u=j;
			}
		}

		vis[u]=1;
		for(int k=1; k<=n; k++)
		{
			if(vis[k]==0&&mp[u][k]*min>dis[k])
				dis[k]=mp[u][k]*min;
		}
	}
	return dis[z];


}
int main(void)
{
	while(scanf("%d",&n)!=EOF)
	{
		for(int i=1; i<=n; i++)
		{
			for(int j=1; j<=n; j++)
				scanf("%lf",&mp[i][j]);
		}		
		int t;
		scanf("%d",&t);
		while(t--)
		{
			scanf("%d%d",&q,&z);
			double ans=prim();
			if(ans==0)
				printf("What a pity!\n");
			else
				printf("%.3f\n",ans);
		}
	}
	return 0;
}
