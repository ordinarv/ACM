#include<stdio.h>
#include<string.h>
const int INF=0x3f3f3f3f;
int m,n;
int mp[1005][1005],dis[1005];
bool vis[1005];
int kij()
{
	dis[1]=0;
	int res=0;
	int flag=0;
	for(int i=1;i<=n;i++)
	{
		int min=-1,u=-1;
		for(int j=1;j<=n;j++)
		{
			if(vis[j]==0&&dis[j]>min)
			{
				min=dis[j];
				u=j;
			}		
		}
		if(u==-1)
		{
			flag=1;
			break;
		}
			
		vis[u]=1;
		res+=min;
		for(int k=1;k<=m;k++)
		{
			if(vis[k]==0&&mp[u][k]>dis[k])
				dis[k]=mp[u][k];	
		}		
	}
	if(flag==1)	return -1;
	else return res;
}
int main(void)
{
	while(scanf("%d%d",&n,&m)!=EOF)
	{
		memset(vis,0,sizeof(vis));
		memset(dis,-1,sizeof(dis));
		memset(mp,-1,sizeof(mp));
		int from,to,w;
		for(int i=1;i<=m;i++)
		{
			scanf("%d%d%d",&from,&to,&w);
			if(w>mp[from][to])
				mp[from][to]=mp[to][from]=w;
			mp[i][i]=0;	
		}	
		int ans=kij();
		if(ans==-1)
			printf("-1\n");
		else
			printf("%d\n",ans);			
	}			
	return 0;
 }
