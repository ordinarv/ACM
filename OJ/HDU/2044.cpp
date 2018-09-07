#include<iostream>

using namespace std;
int main()
{
	int t;
	long long a[55];
	a[3]=2;
	a[2]=1;
	cin>>t;
	while(t--)
	{
		int c,b;
		cin>>b>>c;
		int n=c-b+1;		
		for(int i=4;i<=n;i++)
		{
			a[i]=a[i-1]+a[i-2];
		}
		cout<<a[n]<<endl;
	}	
	return 0;
}

