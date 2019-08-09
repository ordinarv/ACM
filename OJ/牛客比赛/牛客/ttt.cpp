#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int maxn = 1e9;
int main() {
	int n;
	string s="";
	cin>>n;

	while(n!=0) {
		if(n%2==0) {
			n=(n-2)/2;
			s+='G';
		
		} else {
			n=(n-1)/2;
			s+='N';
		}
	}
	for(int i=s.length()-1; i>=0; i--)
		cout<<s[i];
	cout<<endl;

	return 0;
}
