#include<stdio.h>

int main(void) 
{
	int ans=0,a[12];
	for(int i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
		if(a[i]%5==0)
			ans+=a[i];
		
	}
	printf("s=%d\n",ans);
	
	
	
	
	return 0;
}
