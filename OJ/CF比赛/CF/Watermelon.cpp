#include<stdio.h>

int main()
{
	int k;
	while(scanf("%d",&k)!=EOF)
	{
		int flag=0;
		for(int i=1;i<=k/2;i++)
		{
			if(i%2==0&&(k-i)%2==0)
			{
				flag=1;
				break;
			}
		}
		if(flag)
			printf("YES\n");	
		else
			printf("NO\n");
	}	
	return 0;
}

