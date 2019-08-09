#include<stdio.h>

int pow(int a,int b)
{
	int r=1;int base=a;
	while(b)
	{
		if(b&1)
			r*=base;
		base*=base;
		b>>=1;	
	}
	return r;
}
int main(void)
{
	int x,n;
	scanf("%d%d",&x,&n);
	printf("%d",pow(x,n));
	return 0;
}

