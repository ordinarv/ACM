#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int maxn = 1e5+5;
char mp[200];
int main() {
	string s1,s2,res;
	int flag = 1;
	cin>>s1>>s2>>res;
	for(int i=0;i<s2.length();i++){
		if(mp[s1[i]] != 0 && mp[s1[i]] != s2[i]) {
			flag = 0;
			printf("!3 %c %c\n",mp[s1[i]],s2[i]);
			break;
		}
		mp[s1[i]] = s2[i];
	}
	for(int i='A';i<='Z';i++){
		if(mp[i] == 0) {
			printf("!2");
			flag = 0;
			break;
		}
		check
	}
	if(!flag) 
		printf("Failed");
	else 
		for(int i=0;i<res.length();i++)
			printf("%c",mp[res[i]]);
	printf("\n");	
	return 0;
}
