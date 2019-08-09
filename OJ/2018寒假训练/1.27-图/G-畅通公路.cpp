#include<stdio.h>
#include<algorithm>
using namespace std;
int f[105];
struct unt{
	int c,v,w;	
}res[5000];						//5000??? because100*99/2

bool cmp(unt a,unt b)
{
	return a.w<b.w;	
}
int find(int x)
{
	return f[x]==x?x:find(f[x]);
}

int main(void)
{
	int T,n,p; 
	
	while(scanf("%d",&T))
	{
		if(T==0) break;
		for(int i=1;i<=T;i++)	//initialization.
			f[i]=i;
		p=T*(T-1)/2;
		for(int i=1;i<=p;i++)
		{
			scanf("%d%d%d",&res[i].c,&res[i].v,&res[i].w);
		}
		sort(res+1,res+T+1,cmp);
		for(int i=1;i<=p;i++)
		{
			
			
		}
	}
	
	
	
	
	return 0;
}
