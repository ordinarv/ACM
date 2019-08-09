#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int maxn = 1e5+10;
int main(){
	int n;
	char c;
	string s;
	cin>>n;
	cin>>c;
	getchar();
	getline(cin,s);
	//cout<<s<<endl;
	int len = s.length(),cnt = s.length()-1;
	if(len >= n) {
		for(int i=len-n;i<len;i++)
			cout<<s[i];	
	}
	else {
		for(int i=len;i<n;i++)
			cout<<c;
		cout<<s<<endl;		
	}
	return 0;
}
