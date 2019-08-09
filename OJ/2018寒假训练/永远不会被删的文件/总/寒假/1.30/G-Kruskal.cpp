#include<stdio.h>
#include<algorithm>
#include<string.h>
using namespace std;
int m,n;
int f[1005];
struct unt
{
	int a,b,w;
} mp[20005];
bool cmp(unt a,unt b)
{
	return a.w>b.w;
}
int find(int x)
{
	return x==f[x]?x:find(f[x]);
}
int join(int x,int y)
{
	int jx=f[x],jy=f[y];
	if(jx!=jy)
		return f[jx]=jy;
}

int main(void)
{
	scanf("%d%d",&n,&m);
	for(int i=1; i<=m; i++)
		scanf("%d%d%d",&mp[i].a,&mp[i].b,&mp[i].w);
	for(int i=1; i<=n; i++)
		f[i]=i;
	sort(mp+1,mp+1+m,cmp);

	int ans=0,cnt=0;
	for(int i=1; i<=m; i++)
	{
		if(find(mp[i].a)!=find(mp[i].b))
		{
			ans+=mp[i].w;
			join(mp[i].a,mp[i].b);
			cnt++;
			if(cnt==n-1) break;
		}
		
	}
	if(cnt==n-1)
		printf("%d\n",ans);
	else
		printf("-1\n");

	return 0;
}
