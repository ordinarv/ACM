#include<iostream>

using namespace std;
int main()
{
	int a[60],n;
	a[1]=1;
	a[2]=2;
	a[3]=3;
	while(cin>>n&&n)
	{
		for(int i=4; i<=n; i++)
			a[i]=a[i-1]+a[i-3];
		cout<<a[n]<<endl;	
	}

	return 0;
}

