#include<stdio.h>

int main()
{
	double ans=0;
	int a;
	scanf("%d",&a); 
	if(a<=150)
	ans+=(a*0.4463);
	else if(a>150&&a<=400)
	{
		ans=(150*0.4463)+(a-150)*0.4663;
	}
	else 
	{
		ans=(150*0.4463)+(250*0.4663)+(a-400)*0.5663;
	}
	printf("%.1f\n",ans);	
	
	return 0;
}
