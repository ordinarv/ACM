#include<stdio.h>
int main(void)
{
	int a[6][6]={0},max=-10,min=1000;
	for(int i=0;i<5;i++)
	{
		for(int j=0;j<4;j++)
		{
			scanf("%d",&a[i][j]);
			max=max>a[i][j]?max:a[i][j];
			min=min<a[i][j]?min:a[i][j];
		}
		
	}
	printf("max=%d,min=%d\n",max,min);
	for(int i=0;i<5;i++)
	{
		for(int j=0;j<4;j++)
		{
			if(max==a[i][j])
				printf("%2d ",min);
			else if(min==a[i][j])
				printf("%2d ",max);	
			else
				printf("%2d ",a[i][j]);
			
		}
		printf("\n");
	}
	return 0;
}


