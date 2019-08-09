#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int maxn = 30;

int main() {
	char s[maxn][maxn];
	for(int i=0;i<4;i++){
		scanf("%s",s[i]);
	}
	for(int i=0;i<4;i++){
		//printf("%c\n",s[i]);
		
		printf("%c%c",s[i][0],s[i][1]);
	}
	//printf("%c%c%c%c%c%c",s[])
	return 0;
}
