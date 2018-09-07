#include<iostream>

using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		char c;double ans=0,y;
		cin>>c>>y;
		if(c>=65&&c<=90)//up
			ans+=((c-64)+y);
		else if(c>=97&&c<=122)//low
			ans+=(-(c-96)+y);
		cout<<ans<<endl;
	}
	return 0;
}

