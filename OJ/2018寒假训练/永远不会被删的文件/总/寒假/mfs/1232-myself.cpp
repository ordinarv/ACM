#include<stdio.h>//1232


#include<algorithm>
using namespace std;


int pre[1000000];
int find(int x)
{
	int r=x;
	while(pre[r]!=r)
		r=pre[r]; 
}
void join(int x,int y)
{
	int jx=find(x),jy=find(y);
	if(jx!=jy)
		pre[jx]=jy;
	
}
int n,m
int main(void)
{
	int a,b;
	while(scanf("%d%d",&n,&m))
	{
		if(n==0) break;
		for(int i=1;i<=n;i++)
			pre[i]=i;
		for(int i=1;i<=m;i++)
		{
			scanf("%d%d",&a,&b);
			join(a,b);
		}
		
		
			
	}
	
	
	return 0;
}

