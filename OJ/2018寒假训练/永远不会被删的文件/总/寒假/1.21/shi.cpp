#include<stdio.h>
#include<string.h>
int main(void)
{
	int count=0,a,b;
	scanf("%d",&a);
	while(a)
	{
		
		printf("%d\n",a%10);
		a/=10;
		count++;
		
	}
	printf("%d",count);
	
	return 0;
}
