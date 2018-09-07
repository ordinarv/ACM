#include<iostream>

using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		double res=1.0/n*100;
		printf("%.2lf%%\n",res);
		
	}
	return 0;
}
