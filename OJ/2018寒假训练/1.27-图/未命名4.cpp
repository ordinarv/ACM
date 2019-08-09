#include<stdio.h>


#include<string.h>
using namespace std;
const int INF=0x3f3f3f3f;
int mp[1010][1010],w[1010][1010],dis[1010],tr[1010];
bool vis[1010];
int m,n,ans,ex;

int dij()
{
	ans=0;int cnt=0;
	dis[1]=0;
	for(int i=1;i<=n;i++)
	{
		int min=INF,u=-1;
		for(int j=1;j<=n;j++)
		{
			if(vis[j]==0&&dis[j]<min)
			{
				min=dis[j];
				u=j;
				tr[cnt++]=u;
			}	
		}
		if(u==-1)
			return -1;
		vis[u]=1;
		for(int k=1;k<=n;k++)
		{
			if(vis[k]==0&&mp[u][k]+min<dis[k])
				dis[k]=mp[u][k]+min;
		}
	}
	return 1;
	
	
	
	
	
	
	
	
}

int main()
{
	
	scanf("%d%d",&n,&m);
	int a,b,c,d;
	memset(mp,INF,sizeof(mp));
	//memset(w,0,sizeof(w));
	memset(dis,INF,sizeof(dis));
	memset(vis,0,sizeof(vis));
	for(int i=1;i<n;i++)
		mp[i][i]=0;
	for(int i=1;i<=m;i++)
	{
		scanf("%d%d%d%d",&a,&b,&c,&d);
		mp[a][b]=mp[b][a]=c;
		w[a][b]=w[b][a]=d;
	}
	
	
	
	if(dij())
		printf("%d %d\n",d[n],);
	else 
		printf("This is a sad story\n");	
	
	return 0;
}



