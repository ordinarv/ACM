#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int maxn = 1e5+5;
const int INF = 0x3f3f3f3f;
int main() {
	int n,x,cnt=0;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>x;
		if(x<60)cnt++;
	}
	cout<<cnt*400<<endl;
	return 0;
}
