#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int maxn = 1e5+10;
struct unt {
	bool sex;
	string nm;
	int f;
} stu[maxn];
bool vis[maxn];
int main() {
	int n,x;
	cin>>n;
	for(int i=0; i<n; i++) {
		cin>>stu[i].sex>>stu[i].nm;
		stu[i].f = i;
	}
		
	for(int i=0; i<n>>1; i++){
		for(int j=n-1;j>=0;j--){
			if(stu[i].sex != stu[j].sex && !vis[stu[j].f]) {
				vis[stu[j].f] = 1;
				cout<<stu[i].nm<<' '<<stu[j].nm<<endl;
				break;
			}
		}
		
	}

	return 0;
}
