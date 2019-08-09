#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int maxn = 1e2+10;
char mp[maxn][maxn];
int main() {
	int n;
	cin>>n;
	char c = 'A';
	int x,y;
	int len = n*2-1;
	for(int i=1; i<=n; i++) {
		x=y=i;
		while(y<=len-i+1) {
			mp[x][y] = c;
			y++;
		}
		y--;
		while(x<=len-i+1) {

			mp[x][y] = c;
			x++;
		}
		x--;
		while(y>=i) {
			mp[x][y] = c;
			y--;
		}
		y++;
		while(x>=i) {

			mp[x][y] = c;
			x--;
		}
		c++;
	}
	for(int i=1; i<=len; i++) {
		for(int j=1; j<=len; j++) {
			cout<<mp[i][j];
		}
		cout<<endl;
	}
	return 0;
}
