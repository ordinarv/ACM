#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int maxn = 1e5+10;
int main(){
	int a,b,cnt =0;
	cin>>a>>b;
	for(int i=a;i<=b;i++){
		int temp = i;
		while(temp){
			if(temp%10 == 8) {
				cnt++;break;
			} 
			temp/=10;
		}
	}
	cout<<cnt<<endl;
	return 0;
}
