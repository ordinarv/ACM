#include<stdio.h>
int main(void)
{
	int n;
	scanf("%d",&n);
	for(int i=0;i<n/2+1;i++)
	{//shangban
		for(int j=0;j<n-i*2-1;j++)
		{
			
			printf(" ");
		}
		for(int k=0;k<2*i+1;k++)
		{
			printf("* ");
		}
		printf("\n");
	}
	for(int i=n/2;i>0;i--)
	{//xia
		for(int j=0;j<n-i*2+1;j++)
		{
			
			printf(" ");
		}
		for(int k=2*i-1;k>0;k--)
		{
			printf("* ");
		}
		printf("\n");
	}
	
	return 0;
}


