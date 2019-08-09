#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int maxn = 31;
int tab[maxn+5];
void init(){
	tab[0] = 1;
	for(int i=1;i<15;i++){
		tab[i] = tab[i-1] * 2;
		//cout<<"i=="<<i<<' '<<tab[i]<<endl;
	}
	
}
int main() {
	init();
	int n,t=0;
	while(~scanf("%d",&n)){
		if(n<0) break;
		int ans = 0;
		for(int i=14;i>=0;i--){
			if(n > tab[i]){
				ans=(i+1);
				break;
			}
		}
		cout<<"Case "<<++t<<": "<<ans<<endl;
	}
	return 0;
}
