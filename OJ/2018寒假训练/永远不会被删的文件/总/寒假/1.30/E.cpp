#include<stdio.h>
#include<algorithm>
#include<string>
#include<iostream>
#include<cstring>
#include<map>
using namespace std;
const int INF=0x3f3f3f3f;
const int MAX=155;

int p[MAX][MAX];
int vis[MAX],dis[MAX];
int N;
int dij(int s,int n)
{
	int i,j;
	
	for(i=1;i<=n;i++)
	{
		dis[i]=p[s][i];
		vis[i]=false;
	}
	dis[1]=0;
	vis[1]=1;
	for(i=1;i<=n;i++)
	{
		int k,tmp=INF;
		for(j=1;j<=n;j++)
			if(vis==0&&dis[j]<tmp)
				tmp=dis[k=j];
		if(tmp==INF) break;
		vis[k]=1;
		for(j=1;j<=n;j++)
		{
			if(vis[j]==0&&dis[j]>dis[k]+p[k][j])
				dis[j]=dis[k]+p[k][j];	
		}		
	}
	return dis[2];
	
}

int main()
{
	int i,j,t;
	char s1[35],s2[35];
	bool flag;
	map<string,int> mp;
	while(scanf("%d",&N)&&N!=-1)
	{
		mp.clear();
		memset(p,INF,sizeof(p));
		scanf("%s%s",s1,s2);
		mp[s1]=1;
		mp[s2]=2;
		int cnt=3;
		flag=0;
		if(strcmp(s1,s2)==0) flag=1;
		for(int i=1;i<=N;i++)
		{
			scanf("%s%s%d",s1,s2,&t);
			if(!mp[s1]) mp[s1]=cnt++;
			if(!mp[s2]) mp[s2]=cnt++;
			p[mp[s1]][mp[s2]]=p[mp[s2]][mp[s1]]=t;
		}
		if(flag)
		{
			printf("0\n");
			continue;
		}
		dij(1,cnt);
		printf("%d\n",dis[2]==INF?-1:dis[2]);
	}
	
	return 0;
}
