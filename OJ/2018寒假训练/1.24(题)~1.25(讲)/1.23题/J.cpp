#include<stdio.h>
int gcd(int x,int y)
{
    return y?gcd(y,x%y):x;
}
int main(void)
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int a,m,n,k,s,a1=1;
		scanf("%d%d%d%d",&a,&m,&n,&k);
		int ans=gcd(m,n);
		a%=k;
		for(int i=0;i<ans;i++)
		{
			a1*=a;
			a1%=k;	
		}
				
		s=(a1+(k-1))%k;
		printf("%d\n",s);
	}
	
	
}

