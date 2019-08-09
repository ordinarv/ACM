#include<stdio.h>

int main(void) 
{
	int a[10],max=0,min=100,p,ans=0;
	for(int i=0;i<6;i++)
	{
		scanf("%d",&a[i]);
		ans+=a[i];	
	}
	for(int i=0;i<6;i++)
	{
		max=max>a[i]?max:a[i];
		min=min<a[i]?min:a[i];
	}
	printf("max:%d\nmin:%d\navg:%d\n",max,min,ans/6);










	return 0;
}
