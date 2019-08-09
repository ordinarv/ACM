#include<stdio.h>

int main(void)
{
	int T,n,a[5005],b[5005];
	scanf("%d",&T);
	while(T--)
	{
		int c[5]={0};
		scanf("%d",&n);
		for(int i=1; i<=n; i++)
			{
				a[i]=i;
				b[i]=1;
			}
		int t=n;	
		while(1)
		{
			if(t<=3) break; 
			for(int i=1,k=0;i<=n;i++)
			{
				if(a[i]%2==0&&b[i])
				{
					b[i]=0;
					t--;
				}
				else if(b[i])
				{
					k++;
					a[i]=k;
				}
			}
			if(t<=3) break;
			for(int i=1,k=0;i<=n;i++)
			{
				
				if(a[i]%3==0&&b[i])
				{
					b[i]=0;
					t--;
				}
				else if(b[i])
				{
					k++;
					a[i]=k;
				 } 
			}
			if(t<=3) break;
			}
			for(int i=1,j=0;i<=n;i++)
			{
				if(b[i])
					c[j++]=i;
			}
			printf("%d",c[0]);
			for(int i=1;i<t;i++)
			{
				if(c[i])
					printf(" %d",c[i]);
			}
			printf("\n");
	}

	return 0;
}
