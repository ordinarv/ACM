#include<stdio.h>

typedef long long ll;

int main()
{
	ll a=1;
	int x,cnt=1;
	scanf("%d",&x);
	while(a%x!=0)
	{
		a=a*10+1;
		cnt++;
	}
	printf("%lld %d\n",a/x,cnt);
	
	
	
	
	
}
