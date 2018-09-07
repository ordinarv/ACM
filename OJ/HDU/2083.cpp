#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,a[510];
		cin>>n;
		for(int i=0;i<n;i++)
			cin>>a[i];
		sort(a,a+n);
		int sum=0,mid=n/2;
		for(int i=0;i<n;i++)	
			sum+=abs(a[i]-a[mid]);
		cout<<sum<<endl;
	}		
	return 0;
}


