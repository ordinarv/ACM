#include<stdio.h>

int main(void) 
{
	int a[1005]={0},n,o,ans,flag;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&o);
		a[o]++;	
	}
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
			if(a[i]>a[j])
			{
				ans=a[i];
				flag=i;
			}
	printf("%d %d",ans,flag);
	
	
	return 0;
}
