#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int INF = 0x3f3f3f3f;
const int maxn = 2e5+5;

int main(){
	std::ios::sync_with_stdio(false); 
	std::cin.tie(0);
	int T;
	cin>>T;
	while(T--){
		int x,y;
		cin>>x>>y;
		for(int i = x;i<=y;i++){
			if(x*2 <=y){
				cout<<x<<' '<<2*x<<endl;
				break;
			} 
		}	
		
	}
	return 0;
}
