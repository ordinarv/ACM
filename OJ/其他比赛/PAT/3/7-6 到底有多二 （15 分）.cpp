#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int maxn = 1e5+10;
int main(){
	string s;
	double k=1;
	cin>>s;
	int len = s.length(),res=len;
	if(s[0] == '-'){
		res = len-1;
		k+=0.5;
	}
	
	if((s[len-1]-48)%2 == 0) k*=2;
	int cnt = 0;
	for(int i=0;i<len;i++){
		if(s[i] == '2') cnt++;
	} 

	printf("%.2lf%\n",cnt*100.0/res*k);
	return 0;
}
