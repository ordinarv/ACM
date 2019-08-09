#include<stdio.h>
#include<algorithm>
using namespace std;
struct unt{
	int a,b;
	double w;
}pr[5010];

bool cmp(unt x,unt y)
{
	return x.w<y.w;
}
int main()
{
	int n,m;
	while(scanf("%d%d",&n,&m)!=EOF)
	{
		for(int i=0;i<n;i++)
		{
			scanf("%d%d",&pr[i].a,&pr[i].b);
			pr[i].w=(double)pr[i].a/pr[i].b;
		}
		sort(pr,pr+n,cmp);
		double ans=pr[0].w*m;
		printf("%.8f\n",ans);
	}
	return 0;
}
	
