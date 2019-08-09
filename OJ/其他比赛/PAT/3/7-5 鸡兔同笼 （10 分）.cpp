#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int maxn = 1e5+10;
int main(){
	int n,m;
	cin>>n>>m;
	int y,x;
	y = (m-2*n)>>1;
	x = n-y;
	cout<<x<<' '<<y<<endl;
	return 0;
}
