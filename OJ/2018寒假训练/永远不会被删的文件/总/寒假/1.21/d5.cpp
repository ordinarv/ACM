#include<stdio.h>
typedef long long ll;
ll jc(int n);

int main(void) 
{
	int n,flag;ll ans=0;
	scanf("%d",&n);
	flag=n;
	for(int i=0;i<flag;i++)
	{
		ans+=jc(n--);
		
		
	}
	printf("%d",ans);
	
	
	
	
	return 0;
}
ll jc(int n)
{
	if(n==0)
		return 1;
	return jc(n-1)*n;	
}
