#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <fstream>
#include <iostream>
#include <list>
#include <map>
#include <set>
#include <string>
#include <vector>
#include <queue>

#define ll long long
#define ld long double
#define X first
#define Y second
#define upn(x, init, n) for (int x = init; x <= n; ++x)
#define upiter(x, container) for (auto x = container.begin(); x != container.end(); ++x)
#define dn(x, init, n) for(int x = init; x >= n; --x)
#define diter(x, container) for (auto x = container.rbegin(); x != container.rend(); ++x)
#define pb push_back
#define pii pair<int, int>
#define el '\n'
#define sfio() freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
#define print(x, l, r) upn(i, l, r) cout << "x[" << i << "] = " << x[i] << ", "
#define PI acos(-1.0)
#define eps 0.0000001
#define mod 1000000007

using namespace std;
int n, m, p;
int f[1005][1005];
int s[15];
vector<pii> castle[15];
vector<pii> tmp;
vector<pii> last[15];
queue<pair<pii, int>> q;
int cntLast = 0;

bool ok(int x, int y, int player) {
	return (x && y && x <= n && y <= m && !f[x][y]);
}

int main() {
	cin.sync_with_stdio(0);
	cin.tie(0);
	cin >> n >> m >> p;
	upn(i, 1, p) {
		cin >> s[i];
	}
	upn(i, 1, n) {
		upn(j, 1, m) {
			char c;
			cin >> c;
			if (c == '.')
				f[i][j] = 0;
			else if (c == '#')
				f[i][j] = -1;
			else {
				f[i][j] = c - '0';
				castle[c - '0'].pb({i, j});
				last[c - '0'].pb({i, j});
				++cntLast;
			}
		}
	}
	while (cntLast) {
		upn(player, 1, p) {
			for (auto &it: last[player]) {
				int x = it.X;
				int y = it.Y;
				if (ok(x + 1, y, player)) {
					q.push({{x + 1, y}, 1});
				}
				if (ok(x - 1, y, player)) {
					q.push({{x - 1, y}, 1});
				}
				if (ok(x, y + 1, player)) {
					q.push({{x, y + 1}, 1});
				}
				if (ok(x, y - 1, player)) {
					q.push({{x, y - 1}, 1});
				}
			}
			cntLast -= last[player].size();
			last[player].clear();
			while (!q.empty()) {
				int x = q.front().X.X;
				int y = q.front().X.Y;
				int d = q.front().Y;
				q.pop();
				printf("bfs[%d][%d], d %d\n", x, y, d);

				if (f[x][y])
					continue;
				f[x][y] = player;
				castle[player].pb({x, y});
				if (ok(x + 1, y, player) && d < s[player]) {
					q.push({{x + 1, y}, d + 1});
				}
				if (ok(x - 1, y, player) && d < s[player]) {
					q.push({{x - 1, y}, d + 1});
				}
				if (ok(x, y + 1, player) && d < s[player]) {
					q.push({{x, y + 1}, d + 1});
				}
				if (ok(x, y - 1, player) && d < s[player]) {
					q.push({{x, y - 1}, d + 1});
				}
				if (d == s[player]) {
					last[player].pb({x, y});
					++cntLast;
				}
			}
		}
	}
	upn(k, 1, p) {
		cout << (int) castle[k].size() << " ";
	}
}
