#include<iostream>

using namespace std;
int main()
{
	int h1,h2,m1,m2,ha,ma;
	cin>>h1>>m1>>h2>>m2;
	if(m1>m2)
	{
		h2--;
		m2+=60;
	}
	ma=m2-m1;
	ha=h2-h1;
	cout<<ha<<' '<<ma<<endl;
		
	
	return 0;
}
