#include<stdio.h>

int main(void)
{
	int a,b,n[10],d[100000];
	while(scanf("%d%d",&n,&b))
	{
		if(a==0&&b==0) break;
		int res=0;
		for(int i=a;i<=b;i++)
		{
			n[0]=i%10;//gewi
			n[1]=i/10%10;
			n[2]=i/100%10;
			n[3]=i/1000%10;
			n[4]=i/10000%10;
			n[5]=i/100000%10;
			if(n[0]==4||n[1]==4||n[2]==4||n[3]==4||n[4]==4||n[5]==4)
				res++;
			else if(n[0]==8&&n[1]==3||n[1]==8&&n[2]==3||n[2]==8&&n[3]==3||n[3]==8&&n[4]==3||n[4]==8&&n[5]==3)
				res++;
		}
		
		printf("%d\n",res);
	}
	
	
	
	return 0;
}
