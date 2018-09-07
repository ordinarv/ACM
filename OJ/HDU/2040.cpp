#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int a,b;
		cin>>a>>b;
		int sum1=0,sum2=0;
		for(int i=2;i<sqrt(a);i++)
			if(a%i==0)
				sum1+=(i+(a/i));
				
		for(int i=2;i<sqrt(b);i++)
			if(a%i==0)
				sum2+=(i+(a/i));
		if(sum1==b-1||sum2==a-1)
			cout<<"YES"<<endl;
		else 
			cout<<"NO"<<endl;
	}	
	return 0;
}

