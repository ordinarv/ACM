#include<iostream>

using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int a1,b1,c1,a2,b2,c2,a,b,c;
		cin>>a1>>b1>>c1>>a2>>b2>>c2;
		c=(c1+c2)%60;
		b=(b1+b2+(c1+c2)/60)%60;
		a=(a1+a2+(b1+b2+(c1+c2)/60)/60);
		cout<<a<<' '<<b<<' '<<c<<endl;				
	}			
	return 0;
}

