#include<stdio.h>
typedef long long ll;

int main(void)
{
	int t,n;
	ll a[100];
	a[0]=1;a[1]=1;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		for(int i=2;i<=n;i++)
		{
			a[i]=a[i-1]+a[i-2];		
		}
		printf("%lld\n",a[n]);
	}
	
	
	
	return 0;
}

