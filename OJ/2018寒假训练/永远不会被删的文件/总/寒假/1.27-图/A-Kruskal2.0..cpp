#include<stdio.h>
#include<iostream>
#include<string.h>
#include<algorithm>
using namespace std;
struct unt
{
	int from,to,w;
} mp[5000];
int n,f[50];
void init()
{
	for(int i=1; i<=n; i++)
		f[i]=i;
}

int find(int x)
{
	return f[x]==x?x:find(f[x]);
}

void join(int x,int y)
{
	int jx=f[x],jy=f[y];
	if(jx!=jy)
		f[jx]=jy;
}
bool cmp(unt a,unt b)
{
	return a.w<b.w;
}


int main(void)
{
	char fr,to,lj;

	while(scanf("%d",&n)&&n)
	{
		int cnt=0,ans=0;

		char c[10];
		int a;
		for (int i = 0; i < n - 1; i++)
		{
			//scanf("%s %d", c, &a);
			cin>>c>>a;
			int u = c[0] - '@';
			for (int j = 0; j < a; j++)
			{
				int b;
				//scanf(" %s %d", c, &b);
				cin>>c>>b;
				int v = c[0] - '@';
				mp[cnt].from = u;
				mp[cnt].to = v;
				mp[cnt++].w = b;
			}
		}

		
		init();
		sort(mp,mp+cnt,cmp);
		for(int i=0; i<cnt; i++)
		{
			if(find(mp[i].from)!=find(mp[i].to))
			{
				join(mp[i].from,mp[i].to);
				ans+=mp[i].w;
			}
		}
		printf("%d\n",ans);
	}
	return 0;
}


