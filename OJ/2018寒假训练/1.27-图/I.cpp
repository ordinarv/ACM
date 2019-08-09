#include<stdio.h>
#include<string.h>
#include<math.H>
const int INF=0x3f3f3f3f;
int n,sr[105][3];
bool vis[105];
double mp[105][105],dis[105],ans,res;

void init()
{
	memset(vis,0,sizeof(vis));
	memset(dis,INF,sizeof(dis));
	ans=0;res=0;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			double d=sqrt((sr[j][1]-sr[i][1])*(sr[j][1]-sr[i][1])+(sr[j][2]-sr[i][2])*sr[j][2]-sr[i][2]); 
			mp[i][j]=mp[j][i]=d*100;			
		}
	}
}

double prim()
{
	dis[1]=0;
	
	for(int i=0;i<=n;i++)
	{
		double min=INF;
		int u;
		for(int j=0;j<=n;j++)
		{
			if(vis[j]==0&&dis[j]<min) 
			{
				u=j;
				min=dis[j];
			}
		}
		res+=min;
		vis[u]=1;
		for(int k=1;k<=n;k++)
		{
			if(vis[k]==0&&mp[u][k]<dis[k])
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
		for(int i=1;i<=n;i++)
		{
			for(int j=1;j<=2;j++)
			{
				scanf("%d",&sr[i][j]);
			}			
		}
		init();
		
		ans=prim();
		printf("%lf\n",ans); 
		
		
	}
	
	
	
	
	
	
	
	
	
}



 
