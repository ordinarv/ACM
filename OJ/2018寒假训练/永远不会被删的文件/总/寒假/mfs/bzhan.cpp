#include<stdio.h>
#include<algorithm> 

const int maxn = 105;
struct unt{
	int a,b;
	
}; 

int father[maxn];
bool cmp()
void ini()
{
	for(int i=0;i<M;i++)
		father[i] = i;
}
int Find(int x)				//找集合； 
{
	if(x == father[x]) return x;
	else return father[x] = Find(father[x]);
	
}

bool Same(int x,int y)//判断x，y是否在一个集合里面； 
{
	return Find(x) == Find(y); 
}

void union(int x,int y)
{
	int u = Find(x),v = 
}

void kruskal(int x,int y)
{
	sort(E+1,E+1+M,cmp);
	for(int i = 1;i <= m;i++)
	{
		if(Same(E[i]).from,E[i].to)
		
	}
	
}
int main()
{
	int n,m;

	
	
	
	
	
	
	
	
	return 0;
}
