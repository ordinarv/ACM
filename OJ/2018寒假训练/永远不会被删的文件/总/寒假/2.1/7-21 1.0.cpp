#include<iostream>

using namespace std;
int main()
{
	int a[105],n,m;
	scanf("%d%d",&n,&m);
	while(m>n)
	{
		m-=n;
	}


	for(int i=0; i<n; i++)
		scanf("%d",&a[i]);
	if(m==n)
	{
		int flag=1;
		for(int i=0; i<n; i++)
		{
			if(flag)
			{
				printf("%d",a[i]);
				flag=0;
			}
			else
				printf(" %d",a[i]);
		}
	}
	else
	{
		printf("%d",a[m]);
		for(int i=m+1; i<n; i++)
		{
			printf(" %d",a[i]);
		}
		for(int i=0; i<m; i++)
		{
			printf(" %d",a[i]);
		}

	}
	printf("\n");

	return 0;
}

