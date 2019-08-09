#include<iostream>
#include<cstring>
bool a[1010];
using namespace std;
int main()
{
	int n,k;
	cin>>n>>k;
	memset(a,1,sizeof(a));
	for(int i=2; i<=k; i++)
	{
		for(int j=1; j<=n; j++)
		{
			if(j%i==0)
				a[j]=!a[j];
		}

	}
	int flag=1; 
	for(int i=1; i<=n; i++)
	{
		if(a[i]==1)
		{
			if(flag)
			{
				flag=0;
				printf("%d",i);
			}
			else
				printf(" %d",i);
		}

	}

	printf("\n");

	return 0;
}

