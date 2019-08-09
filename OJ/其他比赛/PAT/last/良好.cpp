#include<iostream>
using namespace std;
typedef long long ll;
const int maxn = 1e5+10;
ll n;
int main() {
	cin>>n;
	cout<<n<<"=";
	int flag=0;
	if(n == 1){
		cout<<1<<endl;
		return 0;
	}
	for(long i=2; i<=n; i++) {
		int p=0,k=0;
		while(n%i==0) {
			n/=i;
			p=i;
			k++;
		}
		if(p!=0) {
			if(flag==1)
				cout<<"*";
			cout<<p;
			flag=1;
		}
		if(k>1) {
			cout<<"^"<<k;
		}
	}

	cout<<endl;
	return 0;
}
