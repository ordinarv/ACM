#include<iostream>
using namespace std;
int main()
{
	int n,m;
	while(cin>>n>>m)
	{
		
		for(int i=1;i<=n+2;i++)
			if(i==1||i==n+2)cout<<'+';
			else cout<<'-';
		cout<<endl;	
		for(int i=2;i<m+2;i++)
		{
			for(int j=1;j<=n+2;j++)
				if(j==1||j==n+2)
					cout<<'|';
				else 
					cout<<' ';	
			cout<<endl;		
		}	
		for(int i=1;i<=n+2;i++)
			if(i==1||i==n+2)cout<<'+';
			else cout<<'-';	
		cout<<endl;	
		cout<<endl;
	}
	return 0;
}
