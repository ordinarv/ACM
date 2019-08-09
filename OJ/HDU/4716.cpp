#include<iostream>

using namespace std;
int main()
{
	int t,cnt=0;
	cin>>t;
	while(t--)
	{
		int n;cin>>n;n=100-n;
		cout<<"Case #"<<++cnt<<":"<<endl;
		cout<<"*------------*"<<endl;
		for(int i=0;i<10;i++)
		{
			if((n-=10)>=0)
			cout<<"|............|"<<endl;
			else
			cout<<"|------------|"<<endl;		
		}
		cout<<"*------------*"<<endl;
	}	
	return 0;
}
