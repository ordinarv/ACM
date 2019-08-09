#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int maxn = 1e5+5;

int main() {
	int n,sad=0,sad1=0,flag = 1,high=0,sum=0;
	string in,out;
	char c;
	getline(cin,in);
	for(int i=0;i<in.length()-1;i++){
		int flag = 0;
		if(sad) {
			sad--;
			if(high == 0) {
				out+='-';flag = 1;
			}	
		}
		else if(sad1) {
			sad1--;
			if(high == 0) {
				out+='-';flag = 1;
			}	
		}
		if(flag) continue;
		if(high) high--;
		if(in[i] == 'X'){
			sad++; c = 'U';
		}
		else if(in[i] == 'T'){
			if(in[i-1] == 'T') sad1++;
			else sad1+=2;sum+=7;
			c = 'D';
		}
		else if(in[i] == 'C'){
			high+=2;sum-=3;c='!';
		}
		out+=c;
	}
	cout<<out<<endl;
	cout<<sum<<endl;
	return 0;
}
