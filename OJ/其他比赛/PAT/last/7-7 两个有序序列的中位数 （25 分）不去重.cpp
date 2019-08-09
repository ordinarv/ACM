#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define  pb push_back
const int maxn = 1e5+5;
vector<int>s;
int main() {
	int n,x;
	scanf("%d",&n);

	for(int i=0;i<n;i++){
		scanf("%d",&x);
		s.pb(x);
	}
	for(int i=0;i<n;i++){
		scanf("%d",&x);
		s.pb(x);
	}
	sort(s.begin(),s.end(),less<int>());
	//cout<<s[0]<<' '<<s[1];
	cout<<s[(s.size()-1)/2]<<endl;
	return 0;
}
