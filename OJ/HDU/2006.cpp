#include<iostream>
using namespace std;
int main()
{
	int n;
	while(cin>>n)
	{
		int pro=1,b;
		for(int i=0;i<n;i++)
		{
			cin>>b;
			if(b%2!=0) 
				pro*=b;
		}	
		cout<<pro<<endl;	
	}
	return 0;
}

