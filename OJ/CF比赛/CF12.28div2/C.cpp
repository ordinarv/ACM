#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int maxn = 998244353;
int tab[185];
void init() {
	int temp;
	for(int i=3; i<=400; i++) {
		//	temp = (i-2) * 180 / i / (i-2);
		//if(180 % i) continue;
		//temp = 180/i;
		for(int j = i-2; j >0 ; j--) {
			if((180*j) % i) continue;
			temp = (j*180)/i;
			if(!tab[temp]) tab[temp] = i;
		}
	}
	//tab[179] = 360;
}
int main() {

	int T;
	init();
	cin>>T;
	while(T--) {
		int n;
		cin>>n;
		cout<<tab[n]<<endl;
	}
	return 0;
}
