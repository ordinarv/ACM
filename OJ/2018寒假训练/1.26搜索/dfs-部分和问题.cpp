#include<stdio.h>

int sum;
int a[25];
int vis[25]= {0};
int n,k,flag;
int dfs(int i,int sum)
{

	if(!vis[i]&&i<n)
	{
		
		flag++;
		printf("´ÎÊı%d:sum=%d",flag,sum);
		sum+=a[i];
		if(sum==k) return true;
		else if(sum<k)
		{
			vis[i]=1;
			dfs(i+1,sum);
		}
		else
		{
			sum-=a[i];
			dfs(i+2,sum)
		}
	}

}

int main(void)
{

	while(~scanf("%d",&n))
	{
		sum=0;flag=0;
		for(int i=0; i<n; i++)
		{
			scanf("%d",&a[i]);
		}
		scanf("%d",&k);
		if(dfs(0,0)) printf("Yes\n");
		else printf("No\n");

	}







	return 0;
}

