#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int maxn = 1e2+5;
const int INF = 0x3f3f3f3f;
int main () {
	int n;
	cin>>n;
	int flag = 0;
	for(int x=1; x<=100; x++) {
		for(int y=x; y<=100; y++) {
			if(x*x+y*y==n) {
				flag = 1;
				cout<<x<<" "<<y<<endl;
			}
		}
	}
	if(!flag) cout<<"No Solution"<<endl;

	return 0;
}
