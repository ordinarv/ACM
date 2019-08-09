#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int maxn = 1e2+5;
char mp[][20]={
	" 0 ",
	" 1,.?!",
	" 2ABC",
	" 3DEF",
	" 4GHI",
	" 5JKL",
	" 6MNO",
	" 7PQRS",
	" 8TUV",
	" 9WXYZ"	
};
int num[] = {2,5,4,4,4,4,4,5,4,5};
int main() {
	string s;
	getline(cin,s);
	
	int cnt = 0;
	for(int i=0;i<s.length();i++){
		cnt++;
		if(s[i] == ' ') {
			cnt--;
			int pos = s[i-1]-48;
			if(cnt%num[pos] == 0) cnt = num[pos];
			else cnt = cnt%num[pos];
			printf("%c",mp[s[i-1]-48][(cnt)]);
			cnt=0; 
		}
		else if(i == s.length()-1){
			int pos = s[i]-48;
			if(cnt%num[pos] == 0) cnt = num[pos];
			else cnt = cnt%num[pos];
				printf("%c",mp[s[i]-48][cnt]);
		}
	}
	return 0;
}

