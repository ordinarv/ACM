#include<stdio.h>
#include<algorithm>
#include<math.h>
#include<string.h>
using namespace std;
int f[105];
int m;
struct node
{
	int a,b;
	double w;
};
struct node mp[10010],c[10010];
bool cmp(node a,node b)
{
	return a.w<b.w;
}
void init()
{
	for(int i=1; i<=m; i++)
		f[i]=i;
	
}

int find(int x)
{
	return x==f[x]?x:find(f[x]);
}
void join(int x,int y)
{
	int jx=f[x],jy=f[y];
	if(jx!=jy)
		f[jx]=jy;
}

int main(void)
{
	int T;
	scanf("%d",&T);
	while(T--)
	{
		scanf("%d",&m);
		for(int i=1; i<=m; i++)
			scanf("%d%d",&c[i].a ,&c[i].b);
		int j=0;int ans=0;	
		double sum=0;
		for(int i=0; i<m; i++)
		{
			for(int k=0; k<i; k++)
			{
				mp[j].a=i;
				mp[j].b=k;
				mp[j].w=sqrt((c[i].a-c[j].a)*(c[i].a-c[j].a)+(c[i].b-c[j].b)*(c[i].b-c[j].b));
				j++;
			}
		}
		sort(mp,mp+j,cmp);
		init();
		for(int i=0;i<j;i++)
		{
			if(find(mp[i].a)!=find(mp[i].b)&&mp[i].w>=10&&mp[i].w<=1000)
			{
				join(mp[i].a,mp[i].b);
				ans++;
				sum+=mp[i].w;
			}
			if(ans==m-1)
				break;
		}
		if(ans==m-1)
			printf("%.1lf\n",sum*100);
		else
			printf("oh!\n");	
	}

	return 0;
}
