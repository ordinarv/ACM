#include<stdio.h>
#include<string.h>

const int INF=0x3f3f3f3f;
const int MAXN=1e5+5;
struct unt{
	int w;
	int dis;
	
};
int ans=0;
vector<unt>adj[MAXN];
int d[MAXN],vis[MAXN];
int prim(int x)
{
	memset(x,0,sizeof(x));
	d[x]=0;
	for(int i=0;i<n;i++)	
	{
		int u=-1,min=INF;//u=-1???
		for(int j=0;j<n;j++)
		{
			if(vis[j]==0&&d[j]<min)
			{
				u=j;
				min=d[j];
			}		
		}
		ans+=min;
		vis[u]=1;
		
		
		
		
		
		
		
		
	}
	
}
int main(void)
{
	
	
	
	
	
	
	
	return  0;
}

