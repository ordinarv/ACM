#include<stdio.h>

int main(void) 
{
	int n,a[10];
	for(int i=0;i<9;i++)
	{
		scanf("%d",&a[i]);
	}
	for(int i=0;i<9;i+=3)
	{
		printf("%4d",a[i]);
	}
	printf("\n");
	for(int i=1;i<9;i+=3)
	{
		printf("%4d",a[i]);
	}
	printf("\n");
	for(int i=2;i<9;i+=3)
	{
		printf("%4d",a[i]);
	}
	printf("\n");
	
	
	
	return 0;
}
