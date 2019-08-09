#include<stdio.h>
int a[32770];
int main(void) 
{
	
	int n,flag=0;
	int tem;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
			if(a[i]>a[j])
			{
				tem=a[i];
				a[i]=a[j];
				a[j]=tem;
				flag++;
			}
	}
	printf("%d\n",flag);
	
	
	return 0;
}
