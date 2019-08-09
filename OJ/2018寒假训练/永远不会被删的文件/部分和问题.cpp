#include<cstdio>
#include<iostream>
using namespace std;
int n,k,a[22],b[22];
bool  dfs(int x,int sum)  //从左到右遍历一遍可得解
{
	if(sum>k) return false;    //此处属于后期补充，当代码加上这一个剪枝后，时间就会变为8MS，所以平时还要多注重剪枝，考虑优化代码啊！！！
	if(x==n) return sum==k;  //如果前n项计算过了，返回sum=k是否相等
	if(dfs(x+1,sum))
	{
		b[x]=0;
		return true;
	}   //如果不加上a[x]的情况，标记为0；
	if(dfs(x+1,sum+a[x]))
	{
		b[x]=1;
		return true;
	}   //如果加上a[x]的情况，标记为1；
	return false;
}
int main()
{
	cin>>n;
	for(int i = 0; i<n; i++)
		scanf("%d",&a[i]);
	cin>>k;
	if(dfs(0,0))
	{
		printf("YES\n");
		for(int i=0; i<n; i++)
			if(b[i])printf("%d ",a[i]);
		printf("\n");
	}
}
