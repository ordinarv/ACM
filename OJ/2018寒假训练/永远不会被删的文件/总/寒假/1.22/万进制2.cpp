#include<stdio.h>
int a[100009];

void  wjz(int n)
{
	int k=1;
	int temp=0;
	a[k]=1;
	for(int i = 1; i <= n; i++)
	{
		temp=0;
		for(int j = 1; j <= k; j++)
		{
			a[j] = a[j]*i+temp;
			temp = a[j] / 10000;
			a[j] %= 10000;
		}
		if(temp > 0)
		{
			a[++k] = temp;
		}

	}
	printf("%d", a[k]);
	for(int i = k-1; i >= 1; i--)
	{
		
		if(a[i] >= 1000)
			printf("%d", a[i]);
		else if(a[i] >= 100)
			printf("0%d", a[i]);
		else if(a[i] >= 10)
			printf("00%d", a[i]);
		else
			printf("000%d", a[i]);
	}
	printf("\n");
	return;
}

int main()
{
	int n;

	while(scanf("%d", &n)!=EOF)
	{
		a[100009]={0};
		wjz(n);
	}
	return 0;
}
