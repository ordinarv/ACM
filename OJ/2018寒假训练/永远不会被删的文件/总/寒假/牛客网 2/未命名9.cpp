#include<stdio.h>

int main(void)
{
	int a=0;
	printf("%d",a%10);


	return 0;
}


/*
long long a[55],n;
	a[0]=0;
	a[1]=1;
	a[2]=1;
	while(scanf("%d",&n)!=EOF)
	{
		for(int i=3; i<=n-1; i++)
		{
			a[i]=a[i-1]+a[i-2]+a[i-3];
		}
		printf("%lld\n",a[n-1]);
	}
*/
