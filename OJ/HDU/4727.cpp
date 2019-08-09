#include<iostream>

using namespace std;
int main() {
	int t,cnt=0,a[100010];
	cin>>t;
	while(t--) {
		int n,ans=0;
		cin>>n;
		for(int i=0; i<n; i++)
			cin>>a[i];
		for(int i=1; i<n; i++) {
			if((a[i]-a[i-1])!=1) {
				ans=i;
				break;
			} else ans=0;
		}
		cout<<"Case #"<<++cnt<<": "<<ans+1<<endl;
	}
	return 0;
}
