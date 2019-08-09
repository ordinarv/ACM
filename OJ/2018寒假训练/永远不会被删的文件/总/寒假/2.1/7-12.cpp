#include<iostream>

using namespace std;

int main()
{
	int n,m,i,k,sum=1,res=0;
	char c;
	scanf("%d %c",&n,&c);
	for(i=3;;i+=2)
	{
		res=i*2;
		if(sum+res<=n)
			sum+=res;	
		else
		{
			i-=2;
			break;	
		}			
	}
	m=n-sum;
	int j=i;
	k=i;
	for(;j>i/2;j--)   //up 
	{
		for(int s=i-j;s>0;s--)//kong ge
		{
			printf(" ");
		}
		int a=k;
		k-=2;
		while(a--)
		{
			printf("%c",c);
		}
		printf("\n");	
		
	}
	int p=3;
	for(j;j>0;j--)	//down
	{
		for(int s=j-1;s>0;s--)//kong ge
		{
			printf(" ");
		}
		int b=p;
		while(b--)
		{
			printf("%c",c);
		}
		if(p+2<=i)
			p+=2;
		printf("\n");
	}
	
	
	
	printf("%d\n",m);
	
	return 0;
}

