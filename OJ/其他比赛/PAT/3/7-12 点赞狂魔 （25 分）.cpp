#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int maxn = 1e2+10;
struct unt {
	string name;
	set<int> s;
	int v,k;
} user[maxn];
bool cmp(unt a,unt b) {
	if(a.v == b.v) return a.k<b.k;
	return a.v>b.v;
}
int main() {
	int n,k,x;
	cin>>n;
	for(int i=0; i<n; i++) {
		cin>>user[i].name;
		cin>>k;
		user[i].k = k;
		for(int j=0; j<k; j++) {
			cin>>x;
			user[i].s.insert(x);
		}
	}
	for(int i=0; i<n; i++) {
		user[i].v = user[i].s.size();
	}
	sort(user,user+n,cmp);

	if(n>=3)cout<<user[0].name<<' '<<user[1].name<<' '<<user[2].name<<endl;
	else if(n == 2)cout<<user[0].name<<' '<<user[1].name<<" -"<<endl;
	else if(n == 1)cout<<user[0].name<<" -"<<" -"<<endl;
	
	return 0;
}
