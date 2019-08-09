#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int maxn = 1e5+5;

int main() {
	string s,t;
	while(cin>>s>>t){
		int cur = 0;
		for(int i=0;i<t.length();i++){
			if(t[i] == s[cur]){
				cur++;
			}
			if(cur == s.length()){
				break;
			}
		}
		if(cur == s.length()) cout<<"Yes"<<endl;
		else cout<<"No"<<endl;
	} 
	return 0;
}
