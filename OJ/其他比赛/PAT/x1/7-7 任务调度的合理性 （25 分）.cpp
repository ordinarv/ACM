#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int maxn = 1e5+5;
vector<int> mp[maxn];
int in[maxn];

int main() {
	int n,k,x;
	cin>>n;
	for(int i=1; i<=n; i++) {
		cin>>k;
		for(int j=0; j<k; j++) {
			cin>>x;
			mp[x].push_back(i);
			in[i]++;
		}
	}

/*	for(int i=1; i<=n; i++) { //jian tu
		cout<<"i="<<i<<' ';
		for(int j=0;j<mp[i].size();j++){
			cout<<mp[i][j]<<' ';
		}
		cout<<endl;
	}
*/	
	
	queue<int> q;
	for(int i=1; i<=n; i++) {
		if(in[i] == 0) {
			q.push(i);
			
		}
	}

	vector<int> ans;
	while(!q.empty()) {
		int k = q.front();
		q.pop();
		ans.push_back(k);
		for(int i=0; i<mp[k].size(); i++) {
			int y = mp[k][i];
			in[y]--;
			if(in[y]==0)
				q.push(y);
		}
	}
	
	if(ans.size()== n) cout<<1<<endl;
	else cout<<0<<endl;
	return 0;
}
