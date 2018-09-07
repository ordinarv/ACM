#include<iostream>

using namespace std;
int main()
{
	int n;
	while(cin>>n)
	{
		int a,max=0,min=100;
		double sum=0;
		for(int i=0;i<n;i++)
		{
			cin>>a;
			max=max>a?max:a;
			min=min<a?min:a;
			sum+=a;
		}
		sum-=(max+min);
		sum/=(n-2);
		printf("%.2lf\n",sum);
	}	
	return 0;
}

