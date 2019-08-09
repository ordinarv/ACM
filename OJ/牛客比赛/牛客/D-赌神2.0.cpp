#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int maxn = 1e9;
int main(){
	int n;
	while(cin>>n){
		int cnt = 0;
		while(n>1)
		{
			if(n%2) n-=1;
			else n/=2;
			cnt++;
		}
		if(n != 1) cout<<-1<<endl;
		else cout<<cnt<<endl;
	}
	return 0;
} 
