#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int maxn = 1e5+10;
int main(){
	string s[5];
	for(int i=0;i<3;i++)
		cin>>s[i];
	sort(s,s+3);
	int cnt = 1;
	for(int i=0;i<3;i++){
		cout<<i+1<<":"<<s[i]<<endl;
	}	
	return 0;
}
