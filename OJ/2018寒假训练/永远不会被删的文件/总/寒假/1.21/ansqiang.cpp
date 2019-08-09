#include <stdio.h>
#include <string.h>
int weapon[1000][1000];
int count,num;
double ch;
double f[1000];
int main()
{
	int n,m;
	while(scanf("%d%d",&n,&m)!=EOF)
	{
		memset(f,0,sizeof(f));
		memset(weapon,0,sizeof(weapon));
		for(int i=1; i<=n; i++)
		{
			scanf("%d",&weapon[i][1]);
			scanf("%d",&weapon[i][2]);
			for(int j=3; j<=(weapon[i][2]+2); j++)
				scanf("%d",&weapon[i][j]);
		}
		for(int i=1; i<=m; i++)
		{
			scanf("%d%lf",&num,&ch);
			if(f[num]<ch) f[num]=ch;
		}
		double max=0;
		for(int i=1; i<=n; i++)
		{
			double now=1;
			for(int j=1; j<=weapon[i][2]; j++)
			{
				now+=f[weapon[i][j+2]];
			}
			now*=weapon[i][1];
			if(now>max) max=now;
		}
		printf("%.4lf\n",max);
	}
	return 0;
}
