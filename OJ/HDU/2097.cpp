#include<bits/stdc++.h>

using namespace std;
int main()
{
	int n;
	while(cin>>n&&n)
	{
		int a=0,b=0,c=0,x=n,m;
		while(x)
		{
			m=x%10;
			x/=10;
			a+=m;			
		}
		x=n;
		while(x)
		{
			m=x%12;
			x/=12;
			b+=m;			
		}
		x=n;
		while(x)
		{
			m=x%16;
			x/=16;
			c+=m;			
		}
		if(a==b&&a==c) cout<<n<<" is a Sky Number."<<endl;
		else cout<<n<<" is not a Sky Number."<<endl;
	}	
	return 0;
}

