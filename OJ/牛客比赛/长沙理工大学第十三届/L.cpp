#include<iostream>
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--) {
		int a,b,n,i,h[55];
		cin>>a>>b>>n;
		for(int i=0; i<n; i++)
			cin>>h[i];
		int sum=0;
		for(i=0; i<n; i++) {
			while(h[i]>=2&&b) {
				h[i]-=2;
				b--;
			}
			sum+=h[i];
		}
		if(sum<=a) cout<<"Yes"<<endl;
		else       cout<<"No"<<endl;		
	}
	return 0;
}
