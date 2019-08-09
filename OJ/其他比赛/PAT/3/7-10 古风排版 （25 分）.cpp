#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int maxn = 1e3+10;
vector<char>mp[maxn];
int main() {
	int n;
	cin>>n;
	getchar();
	string s;
	getline(cin,s);
	//cout<<s<<endl;
	int len = s.length();
	if(len%n){
		while(len%n){
			s+=' ';
			len++;
		}
	}
	int cow = len/n;
	int cnt = -1;

	for(int j=1; j<=cow; j++) {
		mp[j].push_back(s[++cnt]);
		mp[j].push_back(s[++cnt]);
		mp[j].push_back(s[++cnt]);
		mp[j].push_back(s[++cnt]);
	}
	for(int i=0;i<n;i++){
		for(int j=cow;j>0;j--){
			cout<<mp[j][i];
		}
		cout<<endl;
	}

	return 0;
}
