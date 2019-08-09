#include<stdio.h>
struct pj{
	int nm={0};
	float wl={0};
	
};
int main(void)
{
	int m,n,a[1005],q[1005][1005]={0},w[1005];
	while(scanf("%d%d",&n,&m)!=EOF)
	{
		struct pj p[1005];
		for(int i=0;i<n;i++)
		{
			scanf("%d",&q[i]);
			scanf("%d",&w[i]);
			for(int j=0;j<w[i];j++)
			{
				scanf("%d",&q[i][j]);
			}
			
		}	
		for(int i=0;i<m;i++)
		{
			scanf("%d",&p[i].nm);
			if(p[i].nm==p[i-1].nm){
				p[i-1].wl=p[i].wl>p[i-1].wl?p[i].wl:p[i-1].wl;
				i--;
					
			}
		}
		float sum=1,ans=1,max=0;
		for(int j=0;j<n;j++)
			for(int i=0;i<w[j];i++)
			{
				sum+=p[i].wl;	
			}
			ans*=sum;
			if(max<ans)max=sum;
		printf("%.4f",&max);	
	}
	
	
	
	
	
	return 0;
}

 
