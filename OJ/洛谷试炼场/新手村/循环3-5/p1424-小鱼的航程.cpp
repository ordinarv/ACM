#include<iostream>
using namespace std;
typedef long long ll;
int main()
{
	ll x,n,sum=0;
	cin>>x>>n;
	for(int i=0;i<n;i++){
		if((i+x)%7==6||(i+x)%7==0)
			continue;
		sum+=250;
	}
	cout<<sum<<endl;
	return 0;
}
