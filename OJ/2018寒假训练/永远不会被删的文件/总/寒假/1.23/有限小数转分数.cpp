#include<stdio.h>
#include<string.h>

int gcd(int x,int y)//最简分数 
{
	return y?gcd(y,x%y):x;
}
int main(void)
{
	int n;
	scanf("%d",&n);
	while(n--)
	{
		char s[15];
		scanf("%s",s);
		
		int len=strlen(s);
		 
		 
		int a=0,fm=len-2,r1=1;
		for(int i=0;i<fm;i++)//分母类似1000； 
			r1*=10;	
		
		for(int i=2;i<len;i++)//分子 
		{
			a=a*10+(s[i]-'0');
		}
		int t=gcd(a,r1);
		printf("gcd=%d a=%d r1=%d\n",t,a,r1);
		printf("%d/%d\n",a/t,r1/t);
	}
	
	return 0;
}
