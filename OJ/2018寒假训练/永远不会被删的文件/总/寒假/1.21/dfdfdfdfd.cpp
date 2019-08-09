#include<stdio.h>

int main(void) 
{
	int n,m,a[10],max=0,flag=15;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
		if(a[i]>max){
			max=a[i];
			flag=15;
			if(i<flag)
				flag=i;
		}
		
		
	}
		
	printf("%d %d\n",max,flag);
	
	
	
	
	return 0;
}
