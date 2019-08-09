#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int maxn = 1e3+5;
vector<int>ans[maxn],res;
int cc[maxn];
int main() {
	int n,m1i,sum=0,m1=0,m2=0;
	cin>>n;
	for(int i=0; i<n; i++) {
		cin>>cc[i];
		res.push_back(cc[i]*10);
		sum+=cc[i];
		if(m1<cc[i]) {
			m1 = cc[i];
			m1i = i;
		}
	}
	sort(cc,cc+n);
	m1=cc[n-1],m2=cc[n-2];
	//printf("de%d %d\n",m1,m2);
	sum-=(m1-m2);
	sum*=10;
	int cnt = 1;
	while(cnt<=sum) {
		for(int j=0; j<10; j++) {
			for(int i=0; i<res.size(); i++) {
				if(res[i] == 0)	continue;
				ans[i].push_back(cnt++);
				res[i]--;
			}

		}
	}
	cnt++;
	if(m1!=m2) {
		int len = m1-m2;
		len*=10;
		for(int i=0; i<len; i++) {
			ans[m1i].push_back(cnt);
			cnt+=2;
		}
	}

	for(int i=0; i<n; i++) {
		cout<<"#"<<i+1<<endl;
		cnt = 1;
		for(int j=0; j<ans[i].size(); j++) {
			if(cnt%10 == 0) cout<<ans[i][j]<<endl;
			else cout<<ans[i][j]<<' ';

			cnt++;
		}
	}
	return 0;
}
