#include<bits/stdc++.h>

using namespace std;
struct unt {
	int s,e;
} tim[110];
bool cmp(unt a,unt b) {
	if(a.e==b.e) return a.s<b.s;
	return a.e<b.e;
}
int main() {
	int t;
	while(cin>>t&&t) {
		for(int i=0; i<t; i++)
			cin>>tim[i].s>>tim[i].e;
		sort(tim,tim+t,cmp);
		int res=0,cnt=0;
		for(int i=0; i<t; i++) {
			if(tim[i].s>=res) {
				res=tim[i].e;
				cnt++;
			}

		}
		cout<<cnt<<endl;
	}
	return 0;
}
