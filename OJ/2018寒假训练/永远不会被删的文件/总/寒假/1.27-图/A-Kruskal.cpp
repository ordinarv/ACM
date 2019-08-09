#include<stdio.h>
#include<string.h>
#include<algorithm>
using namespace std;

struct unt{
	int from,to;
	int w;
}mp[80];
int f[35],m,n;
find(int x,int y)
{
	return x==f[x]?x:find(f[x]);	
}

void join(int x,int y)
{
	int jx=find(x),jy=find(y);
	if(jx!=jy) f[jx]=jy;
}
void init()
{
	for(int i=1;i<=n;i++)
		f[i]=i;
}
bool cmp(unt a,unt b)
{
	return a.w<b.w;
}

int main(void)
{
	while(scanf("%d",&n)&&n)
	{
		init();int r=1;
		scanf("%c",&v);
		mp[r].from=v-'@';
		scanf("%d",&cnt)
		for(int i=0;i<cnt;i++)
		{
			scanf("%c%d",&mp[r].to,&mp[r].w)
		}
	
		
		
	}
	
	
	
	
}
