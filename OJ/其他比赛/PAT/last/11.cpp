#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int maxn = 1e4+5;
ll d[maxn],f[maxn];
void init(){
	/*d[1] = 1;
	for(int i=2;i<=maxn;i++){
		d[i] += d[i-1] + i;
		if(i<=10)
			cout<<d[i]<<endl;
	}
	*/	
	int k = 2;	
	f[1] = 1;
	for(int i=2;i<=maxn;i++){
		for(int j=0;j<i;j++){
			f[k] += f[k-1] + i;
			k++;
		}
		if(k>=maxn) break;
	}
}
int main() {
	init();
	int n;
	while(cin>>n && n){
		cout<<n<<" "<<f[n]<<endl;
	}
	return 0;
}
