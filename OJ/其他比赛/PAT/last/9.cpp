#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int maxn = 1e1+5;
string s[15];
int main() {
	int t,m;
	cin>>t;
	while(t--){
		cin>>m;
		for(int i=0;i<m;i++){
			cin>>s[i];
		}
		int point = 0,temp;
		for(int i=1;i<m;i++){
			for(int j=0;j<s[i].length();i++){
				temp = point;
				if(s[i][j] == s[0][point]){
					
				}
			}
		}
	}
	return 0;
}
