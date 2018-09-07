#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	double a,b,c,d;
	while(cin>>a>>b>>c>>d)
	{
		double dis;
		dis=sqrt((c-a)*(c-a)+(d-b)*(d-b));
		printf("%.2f\n",dis);
	}
	return 0;
}

