#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int maxn = 1e6+5;
int f[maxn];
double w[maxn],r,z;
int sup[maxn];
double findw(int n) {
	if(w[n]) return w[n];
	return w[n] = findw(f[n])*r;
}
vector<int>ans;
int main() {
	int n,k,x;
	double sum=0;
	cin>>n>>z>>r;
	r = 1-r/100;
	w[0] = z;
	for(int i=0; i<n; i++) {
		cin>>k;
		for(int j=0; j<k; j++) {
			cin>>x;
			f[x] = i;
		}
		if(k == 0) {
			cin>>x;
			sup[i] = x;
			ans.push_back(i);
		}
	}
	for(int i=0; i<ans.size(); i++) {
		double x = findw(ans[i])*sup[ans[i]];
		sum+=x;
	}
	printf("%lld\n",(ll)sum);
	return 0;
}

