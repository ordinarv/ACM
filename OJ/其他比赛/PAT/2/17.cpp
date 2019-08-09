#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int maxn = 1e5+10;
int a[5];
int main() {
	string s;
	cin>>s;
	for(int i=0; i<s.length(); i++) {
		if(s[i] == 'g' || s[i] == 'G') a[0]++;
		else if(s[i] == 'p' || s[i] == 'P') a[1]++;
		else if(s[i] == 'l' || s[i] == 'L') a[2]++;
		else if(s[i] == 't' || s[i] == 'T') a[3]++;
	}
	while(a[0]+a[1]+a[2]+a[3]) {
		if(a[0]) cout<<"G",a[0]--;
		if(a[1]) cout<<"P",a[1]--;
		if(a[2]) cout<<"L",a[2]--;
		if(a[3]) cout<<"T",a[3]--;
	}
	cout<<endl;
	return 0;
}
