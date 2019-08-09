#include <stdio.h>
int gcd(int a,int b)
{
	if(a==0)
	return 0;
	else
	return (b==0)?a:gcd(b,a%b);
}
int main()
{
	int N,i;
	int gong,a,b,c,d;
	scanf("%d",&N);
	scanf("%d/%d",&a,&b);
	int t=gcd(a,b);
	if(a)
	{
		a/=t;
		b/=t;
	}
	for(i=1;i<N;i++)
	{
		scanf("%d/%d",&c,&d);
		gong=b*d/gcd(b,d);
		a=a*gong/b+c*gong/d;
		b=gong;
		int t1=gcd(a,b);
		if(t1)
		{
			a/=t1;
			b/=t1;
		}
	}
	if(a&&a/b==0)
	printf("%d/%d\n",a%b,b);
	else if(a%b==0)
	printf("%d\n",a/b);
	else 
	printf("%d %d/%d\n",a/b,a%b,b);
	return 0;
}

