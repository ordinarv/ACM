#include<iostream>

using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		double sum=0,res;
		cin>>n;
		for(int i=1;i<=n;i++)
		{
			res=1.0/i;
			if(i%2==0)
				res=-res;
			sum+=res;	
		}
		printf("%.2f\n",sum);
	}	
	return 0;
}

