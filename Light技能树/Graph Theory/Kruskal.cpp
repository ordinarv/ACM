#include <cstdio>
#include <cstring>
#include <algorithm>
#include <vector>
using namespace std;
const int MAXNODE = 1010;
const int MAXEDGE = 1000010;
typedef int Type;

struct Edge{
    int u, v;
    Type d;
    Edge() {}
    Edge(int u, int v, Type d): u(u), v(v), d(d) {}
}E[MAXEDGE];

int n, m, tot;
int f[MAXNODE];
Type maxcost[MAXNODE][MAXNODE];
vector<Edge> G[MAXNODE];

void init() {
    for (int i = 0; i < n; i++) {
        f[i] = i; G[i].clear(); 
    }
}

int find(int x) {
    return x == f[x] ? x : f[x] = find(f[x]);
}

//kruskal找最小边
bool cmp(const Edge &a, const Edge &b) {
    return a.d < b.d;
}

//dfs找路径最大值
void dfs(int s, int u, Type Max, int fa) {
    maxcost[s][u] = max(maxcost[s][u], Max);
    for (int i = 0; i < G[u].size(); i++) {
        int v = G[u][i].v;
        if (v == fa) continue;
        double tmp = max(Max, G[u][i].d);
        dfs(s, v, tmp, u);
    }
}

void solve() {
    sort(E, E + m, cmp);

    Type Sum = 0;
    for (int i = 0; i < m; i++) {
        int fx = find(E[i].u);
        int fy = find(E[i].v);
        if (fx != fy) {
            f[fx] = fy;
            Sum += E[i].d;
            G[E[i].u].push_back(E[i]);
            swap(E[i].u, E[i].v);
            G[E[i].u].push_back(E[i]);
        }
    }

    memset(maxcost, 0, sizeof(maxcost));
    for (int i = 0; i < n; i++)
        dfs(i, i, 0, -1);
}

int main() {
    init();
    solve();
    return 0;
}
