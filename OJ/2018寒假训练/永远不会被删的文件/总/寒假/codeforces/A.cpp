#include<stdio.h>

int main()
{
	long long n,m,k;
	while(scanf("%lld%lld%lld",&n,&m,&k)!=EOF)
	{
		long long n1=n/k,m1=m/k;
		if(n%k!=0)
			n1+=1;
		if(m%k!=0)
			m1+=1;
		printf("%lld\n",m1*n1);
	}
	return 0;
}

