#include<stdio.h>

int main(void) 
{
	int n,m,a,b,c;
	scanf("%d%d",&a,&b);
	m=a;
	n=b;
	while(b!=0)
	{
		c=a%b;
		a=b;
		b=c;	
	}
	printf("%d %d\n",a,m*n/a);
	
	
	
	
	return 0;
}
