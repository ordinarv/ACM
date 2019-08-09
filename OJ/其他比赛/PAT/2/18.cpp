#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int maxn = 1e5+10;
int main(){
	vector<int>a;
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		a.push_back(i);
	}
	int cnt = 0;
	while(1){
		if(a.size() == 1) break;
		cnt = 1;
		for(int i=0;i<a.size();i++){
			if(cnt == 3) a[i].erase();
			cnt++;
		}
	}
	cout<<a[0]<<endl;
	return 0;
}
}
