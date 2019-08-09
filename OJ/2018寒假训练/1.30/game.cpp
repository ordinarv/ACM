#include<stdio.h>

int main(void)
{
	int n;
	while(scanf("%d",&n)!=EOF)
	{
		int sum[95],ans=0;
		for(int i=0; i<n; i++)
			scanf("%d",&sum[i]);
		for(int i=1; i<n; i++)
		{
			if(sum[i]-sum[i-1]>15)
			{
				ans=sum[i-1]+15;
				ans=ans>90?90:ans;
				break;
			}
			else
				ans=90;
		}
		if(sum[0]>15)printf("15\n");
		else printf("%d\n",ans);
	}

	return 0;
}

