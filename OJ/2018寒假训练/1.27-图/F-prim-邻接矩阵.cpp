#include<stdio.h>
#include<string.h>


const int INF=0x3f3f3f3f;
int mp[1010][1010],d[1010];
bool vis[1010];
int ans=0,n,m;

int prim(int x)
{
	int min,u;
	memset(d,INF,sizeof(d));
	d[x]=0;
	for(int i=1; i<=n; i++)
	{
		min=-INF,u=-1;
		for(int j=1; j<=n; j++)
		{
			if(vis[j]==0&&d[j]<min)
			{
				min=d[j];
				u=j;
			}
		}
		ans+=min;
		vis[u]=1;
		if(u==-1)
			return -1;
		for(int k=1; k<=n; k++)
		{
			if(vis[k]==0&&mp[u][k]<d[k])
			{
				d[k]=mp[u][k];
			}
		}
	}
	return ans;
}



int main(void)
{
	while(scanf("%d%d",&n,&m)!=EOF)
	{
		ans=0;
		memset(vis,0,sizeof(vis));
		memset(mp,INF,sizeof(mp));
		for(int i=1; i<=n; i++)
			mp[i][i]=0;
		int from,to,w;	
		for(int i=1; i<=m; i++)
		{
			scanf("%d%d%d",&from,&to,&w);
			if(w<mp[from][to])
				mp[from][to]=mp[to][from]=w;
		}
		int res=prim(1);
		printf("%d\n",res);

	}

}








