#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
//#define  endl "\n";
const int maxn = 1e5+5;
ll a[maxn];
int main() {
	freopen("in.txt","r",stdin);
	int n;s
	cin>>n;
	for(int i=1; i<=n; i++) {
		scanf("%d",&a[i]);
	}
	for(int i=1;i<=n;i++){
		for(int j=i+1;j<=n;j++){
			if((a[i]&a[j])!=0) cout<<i<<' '<<j<<'\n',cout<<a[i]<<' '<<a[j]<<endl<<endl;
		}
	}
	return 0;
}
