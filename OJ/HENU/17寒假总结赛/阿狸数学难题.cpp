#include<iostream>
#include<cstring>
#include<string>
using namespace std;
const int maxn=50000;

int main() {
	double x,n,sum;
	while(cin>>x&&x){
		int i; sum=0;
		for(i=2;;i++){
			sum+=(1.0/i);
			if(sum>=x) break;
		}
		cout<<i-1<<" card(s)"<<endl;
	} 


	return 0;
}
