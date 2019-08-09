#include<stdio.h>
#include<algorithm> 
using namespace std;
const int maxn = 111;
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                              
struct edge{
	int from,to;
	long long cost;// 权重 
}E[maxn*maxn]; //have maxn真么多点 就有可能有平方多个边。 

bool cmp(edge a,edge b)
{
	return a.cost<b.cost;
}

int N,M;			//N代表顶点 

int father[maxn];

void init()
{
	for(int i=1;i<=M;i++)
		father[i] = i;
}
int Find(int x)				//找集合； 
{
	if(x == father[x]) return x;
	return father[x] = Find(father[x]);
	
}

bool Same(int x,int y)//判断x，y是否在一个集合里面； 
{
	return Find(x) == Find(y); 
}

void unionset(int x,int y)
{
	int u = Find(x),v = Find(y);
	if(v == u) return;
	father[u] = v;
}

long long kruskal()	//将编排序号贪心的取 ，看相连接的两个点是否在同一个集合内。 
{
	long long res = 0;
	sort(E+1,E+1+M,cmp);	//首先按照权重升序排序 
	for(int i = 1;i <= M;i++)	//遍历所有的边贪心的取； 
	{
		if(Same(E[i].from,E[i].to)) continue; //若在同一个集合就。。。，
		unionset(E[i].from,E[i].to);									  // 否则合并 
		res += E[i].cost;
	}
	return res;
}
int main()
{
	while(scanf("%d%d",&M,&N) == 2)
	{
		if(M == 0) break;
		init();						//初始化 
		for(int i = 0;i <= M;i++)	//读入 
		{
			scanf("%d%d%lld",&E[i].from,&E[i].to,&E[i].cost);
			
		}
		long long res = kruskal();
		for(int i = 0;i <= N;i++)
			if(!Same(i,1))
				res=-1;
		if(res==-1) printf("?\n");
		else printf("%lld\n",res);	
	}	
	
	return 0;
}

	
