#include<stdio.h>
#include<string.h>
#include<algorithm>
using namespace std;
int f[5000],t;
struct unt
{
	int x,y,w;
};

int find(int x)
{
	return f[x]==x?x:find(f[x]);
}

void join(int x,int y)
{
	int jx=find(x),jy=find(y);
	f[jx]=jy;
}
void init()
{
	for(int i=1; i<=t; i++)
		f[i]=i;
}

bool cmp(unt a,unt b)
{
	return a.w<b.w;
}

int main(void)
{
	
	unt mp[5000];
	while(scanf("%d",&t))
	{
		if(t==0) break;
		int ans=0;
		int n=t*(t-1)/2;
		init();
		for(int i=1; i<=n; i++)
			scanf("%d%d%d",&mp[i].x,&mp[i].y,&mp[i].w);

		sort(mp+1,mp+1+n,cmp);
		for(int i=1;i<=n;i++)
		{
			if(find(mp[i].x) != find(mp[i].y))
			{
				join(mp[i].x,mp[i].y);
				ans+=mp[i].w;	
			}			
		}		
		printf("%d\n",ans);	
	}
}
