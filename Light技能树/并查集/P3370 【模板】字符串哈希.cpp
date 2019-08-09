#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
const int maxlen = 1505;
const int maxn = 1e4+5;
int prime=233317;
ull mod = 212370440130137957ll;
ull base = 133;
ull a[maxn];
char s[maxlen];
ull hash(char s[]){
	int len = strlen(s);
	ull res = 0;
	for(int i=0;i<len;i++)
		res = (res * base + (ull)s[i]) % mod + prime;
	return res;
}
int main(){
	int n,ans=1;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%s",s);
		a[i] = hash(s);
	}
	sort(a,a+n);
	for(int i=1;i<n;i++){
		if(a[i]!=a[i-1]) ans++;
	}
	printf("%d\n",ans);
	return 0;
} 


