#include<iostream>

using namespace std;
int main()
{
	int a,b;
	while(cin>>a>>b&&a&&b)
	{
		a%=1000;
		int pro=1;
		for(int i=1;i<=b;i++)
		{
			pro*=a;
			pro%=1000;
			
		}
		cout<<pro<<endl;
	}
	
	return 0;
}
