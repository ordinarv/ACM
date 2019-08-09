#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int maxn = 1e3+5;
int s[maxn],box[maxn],vis[maxn];
int main() {
	int n;
	cin>>n;
	for(int i=1; i<=n; i++) {
		cin>>s[i];
		box[i] = 100;
	}
	for(int i=1; i<=n; i++) {
		for(int j=1; j<=n; j++) {
			if(box[j]>=s[i]) {
				box[j] -= s[i];
				vis[i] = j;
				break;
			}
		}
	}
	int cnt = 0;
	for(int i=1;i<=n;i++) {
		if(box[i]!=100) cnt++;
		cout<<s[i]<<' '<<vis[i]<<endl;
	}
	
	cout<<cnt<<endl;
	return 0;
}
