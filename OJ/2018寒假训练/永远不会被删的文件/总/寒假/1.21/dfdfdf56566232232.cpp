#include<stdio.h>
//思考如何优化 ，以及类似的题
 
int main(void) 
{
	int a[1005],s[1005]={0},n,o,ans=0,flag;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(int i=0;i<n-1;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(a[i]==a[j])
			{
				s[i]++;
			}
		}
	}
	for(int i=0;i<n-1;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(s[i]>s[j])
			{
				if(ans<s[i]){
					ans=s[i];
					flag=i;
				}
				
			}
		}
	}
	
	printf("%d %d",a[flag],ans+1);
	return 0;
}
