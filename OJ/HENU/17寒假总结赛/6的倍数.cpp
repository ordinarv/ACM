#include<iostream>
#include<cstring>
#include<string>
using namespace std;
const int maxn=50000;

int main() {
	string s;
	int t;cin>>t;
	while(t--){
		cin>>s;
		long long sum=0; 
		for(int i=0;i<s.length();i++){
			sum+=(s[i]-48);
		}
		if(s[s.length()-1]%2==0&&sum%3==0) cout<<"YES"<<endl;
		else cout<<"no"<<endl; 
	}
	return 0;
}
