#include<stdio.h>
#include<vector>

const int INF=0x3f3f3f3f;
const int maxn=1e5+5;

struct unt
{
	int v,w;
};
vector<unt>adj[maxn];
int n,dis[maxn];
bool vis[maxn];
int res=0;

void Prim (int x)
{
	mem(dis, INF);              // 将所有权值初始化为正无穷
	dis[x] = 0;                 // 将起点的权值设置为0
	for (int i = 0; i < n; ++i) // 遍历所有顶点，保证结果没有未被访问的顶点
	{
		int u = -1,min = INF;   // 用min筛选出dis中的最小值（即未被筛选过的顶点到已生成树的权值的最小值），用u记录此顶点
		for (int j = 0; j < n; ++j)     // 筛选过程
		{
			if (vis[j] == 0 && dis[j] < min)    // 判断条件为1.未被筛选过，2.小
			{
				u = j;              // 记录顶点
				min = dis[j];       // 记录最小权值
			}
		}
		vis[u] = 1;     // 将筛选出的此点标记
		res += min;     // 将此点到已生成树的最小权值加入到结果中
		// 生成树已更新
		for (int j = 0; j < Adj[u].size(); ++j)     //更新未被筛选过的顶点到新已生成树的权值
		{
			int v = Adj[u][j].v;        // v变量记录顶点
			if (vis[v] == 0 && Adj[u][j].dis < dis[v])      // 判断条件为1.此定点未被筛选过，2.此顶点到新已生成树的距离可以更新之前此顶点到已生成树的距离
			{
				dis[v] = Adj[u][j].dis;     // 更新此顶点到已生成树的距离
	V		}
		}
	}
}
