#include<stdio.h>

int main()
{
	int n;
	scanf("%d",&n);
	while(n--)
	{
		int a,b;
		scanf("%d%d",&a,&b);
		b*=2;//true
		double h=(a-100)*0.9;//stand
		double ans1=h-b,ans2=b-h;
		if(ans1>0)
		{
			if(ans1<h/10)
				printf("you are wan mei!\n");
			else if(ans1>h/10)
			{
				if(b>h)
					printf("you are tai pang le!\n");
				else
					printf("you are tai shou le!\n");
			}
		}
		else
		{
			if(ans2<h/10)
				printf("you are wan mei!\n");
			else if(ans2>h/10)
			{
				if(b>h)
					printf("you are tai pang le!\n");
				else
					printf("you are tai shou le!\n");
			}
		}
	}

return 0;
}


