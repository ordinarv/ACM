#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int n,m;
	while(cin>>n>>m)
	{
		double x=n,sum=x;
		for(int i=1;i<m;i++)
		{
			x=sqrt(x);
			sum+=x;
		}
		printf("%.2lf\n",sum);
		
	}
	
	return 0;
}
