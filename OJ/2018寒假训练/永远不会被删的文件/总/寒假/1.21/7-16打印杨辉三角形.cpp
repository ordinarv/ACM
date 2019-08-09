#include<stdio.h>

int main(void)
{
	int n,ans=1;
	scanf("%d",&n);
	for(int j=0;j<n;j++)
	{
		
		for(int i=0;i<(n-1-j)*2;i++)
			printf(" ");
		for(int k=0;k<=j;k++)
		{
			if(j==0||k==0)
				ans=1;
			else
				ans=ans*(j-k+1)/k;
			printf("%4d",ans);
		}
		printf("\n");
		
		}	
	
	return 0;
}



 
