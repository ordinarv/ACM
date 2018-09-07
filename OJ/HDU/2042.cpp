#include<iostream>

using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int res=3;
		for(int i=0;i<n;i++)
			res=(res-1)*2;
		cout<<res<<endl;	
	}		
	return 0;
}

