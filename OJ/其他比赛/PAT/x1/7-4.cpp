#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int maxn = 1e5+5;
bool cn(char c){
	if(c>=48 && c<='9') return 1;
	return 0;
}
int main() {
	string s;
	cin>>s;
	for(int i=0;i<s.length();i++){
		if(s[i]=='*'||s[i]=='/'||s[i]==')'||s[i]=='('||) cout<<s[i]<<endl;
		else if(s[i]=='+' || s[i]=='-'){
			if(i == 0 || !cn(s[i-1]) ) 
		} 
	}
	return 0;
}
