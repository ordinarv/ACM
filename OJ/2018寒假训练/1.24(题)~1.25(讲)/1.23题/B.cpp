#include<stdio.h> 
int gcd(int x,int y)
{
	return y?gcd(y,x%y):x;
}
typedef long long ll;
int main(void)
{
	int n,k;
	while(scanf("%d%d",&n,&k)!=EOF)
	{
		ll ans,lcm,r=1;
		for(int i=0;i<k;i++)
		{
			r*=10;
		}
			
		lcm=r/gcd(r,n)*n;
		
		printf("%lld\n",lcm);
		
	}
	
	
	
	return 0;
}

