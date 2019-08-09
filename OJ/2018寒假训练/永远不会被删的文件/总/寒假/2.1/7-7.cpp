#include<stdio.h>

struct unt
{
	char nm[10];
	bool sex;
	bool vis=0;
} st[55];

int main(void)
{
	int n;
	scanf("%d",&n);
	for(int i=0; i<n; i++)
	{
		scanf("%d%s",&st[i].sex,st[i].nm);
	}
	int m=n/2,cnt=0;
	while(m--)
	{
		for(int i=n-1; i>=m; i--)
		{
			if(st[cnt].sex!=st[i].sex&&st[i].vis==0)
			{
				printf("%s %s\n",st[cnt].nm,st[i].nm);
				st[i].vis=1;
				cnt++;
				break;
				}	
			}
	}
	return 0;
}


