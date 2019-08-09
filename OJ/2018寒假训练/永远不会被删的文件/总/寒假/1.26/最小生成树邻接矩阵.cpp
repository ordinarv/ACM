#include<stdio.h>
#include<string.h>
const int MAXN = 100000;
const int INF = 0x3f3f3f3f;

int n,g[MAXN][MAXN],d[MAXN],vis[MAXN]={0};//g矩阵，d权值，vis标记 
int ans=0;
void prim(int x)
{
	memset(d,INF,sizeof(d));
	d[x]=0;
	for(int i=0;i<n;i++)
	{
		int u =-1,min=INF;
		for(int j=0;j<n;j++)
		{
			if(vis[j]==0 && d[j]<min)//遍历d[]数组中的数据并比较		 
			{						// 找出最小值记下下标和值
				u=j;				 
				min=d[j];
			}
		}
		vis[u]=1;					//把该点标记为已入树 
		ans+=min;					//权值加上 
		for(int v=0;v<n;v++)		//通过遍历该改行，找到能够连接 
		{
			if(vis[v]==0&&g[u][v]<d[v]) 
			{
				d[v]=g[u][v]; 
			}
		}
		
		
		
	}
	
	
	
}
