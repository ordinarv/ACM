#include<iostream>

using namespace std;
int main()
{
	int n,m;
	while(cin>>n>>m&&n&&m)
	{
		int x,flag=1;
		for(int i=0; i<n; i++)
		{
			cin>>x;
			if(x>=m&&flag) 
			{
				cout<<m<<' ';
				flag=0;
			}
				if(i==n-1) cout<<x;
				else cout<<x<<' ';
		}
		cout<<endl;
	}
	return 0;
}

