#include<stdio.h>

int main(void)
{
	int n;
	while(scanf("%d",&n)!=EOF)
	{
		int cnt=0;
		
		for(int i=0; i<=n/3; i++)
		{
			cnt+=((n-3*i)/2+1);
		}
		printf("%d\n",cnt);
	}
	return 0;
}


