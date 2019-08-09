#include <bits/stdc++.h>
using namespace std;
#define disp(x) cout<<x<<" ";
typedef long long ll;
#define fo(i,a,b) for(int i=a;i<=b;i++)
#define endl '\n'
#define show(x) cout<<x<<endl;
#define rf(i,a,b) for(int i=a;i>=b;i--)
#define pret(x) cout<<x<<endl; return 0;
#define fast_io ios_base::sync_with_stdio(0);
#define let(x,y) cout<<x<<" "<<y<<endl;
typedef vector<int> vi;
ll MOD=1e9+7;
ll MAX=9223372036854775807;

int main() {
	fast_io;
	int n;
	cin>>n;
	int a[n+2][2];
	fo(i,1,n) {
		cin>>a[i][0]>>a[i][1];
	}
	vi ans;
	ans.push_back(1);
	bool temp=1;
	int x=a[1][0];
	int y=a[1][1];
	if(a[x][0]==y or a[x][1]==y) temp=0;
	if(!temp) {
		ans.push_back(x);
		ans.push_back(y);
	} else {
		ans.push_back(y);
		ans.push_back(x);
		swap(x,y);
	}
	while((int)ans.size()<n) {
		int curr=a[x][0];
		if(curr==y) curr=a[x][1];
		ans.push_back(curr);
		x=y;
		y=curr;
	}
	for(auto i:ans) {
		disp(i);
	}
	cout<<endl;
	return 0;
}
