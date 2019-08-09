#include<bits/stdc++.h>

using namespace std;
struct unt
{
	int from,to;
	double w;
} ed[1001000];
int cmp(unt a,unt b)
{
	return a.w <b.w ;
}
int p[1100];
int find(int x)
{
	return x==p[x]?x:find(p[x]);
}
int join(int x,int y)
{
	int fx=find(x);
	int fy=find(y);
	if(fx!=fy)
		p[fx]=fy;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,m,x[110010],y[110010],vis=0;
		double ans=0;
		for(int i=0; i<1100; i++)
			p[i]=i;
		cin>>m>>n;
		for(int i=1; i<=n; i++)
			cin>>x[i]>>y[i];
		int cnt=1;
		for(int i=1; i<=n; i++)
			for(int j=i+1; j<=n; j++,cnt++)
			{
				ed[i].from=i;
				ed[i].to=j;
				ed[i].w=sqrt(1.0*(x[i]-x[j])*(x[i]-x[j])+1.0*(y[i]-y[j])*(y[i]-y[j]));
			}
		sort(ed,ed+cnt,cmp);
		for(int i=1; i<cnt; i++)
		{
			if(find(ed[i].from)!=find(ed[i].to))
			{
				join(ed[i].from,ed[i].to);
				vis++;
			}
			if(vis=n-m)
			{
				ans=ed[i].w;
				break;
			}
		}
		printf("%.2f\n",ans);
	}
	return 0;
}
