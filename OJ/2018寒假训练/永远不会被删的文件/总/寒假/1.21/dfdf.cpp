#include<stdio.h>

int jc(int n);

int main(void) 
{
	int n,ans=0;
	
	for(int i=1;i<=12;i++)
	{
		printf("%6d",jc(i));
		if(i%3==0)
			printf("\n");
	}
	
	return 0;
}
int jc(int n)
{
	if(n==1||n==2)
		return 1;
	return jc(n-1)+jc(n-2);	
}
