#include<stdio.h>
int main(void)
{
	float x,y;
	scanf("%f",&x);
	if(x==7) 
		y=0.66+5;
	else if(x==-2)
		y=1.00;
	else
		y=7;	
	printf("x=%.2f,y=%.2f\n",x,y);
	return 0;
}


