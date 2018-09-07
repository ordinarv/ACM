#include<iostream>

using namespace std;
int main()
{
	double n;
	while(cin>>n)
	{
		if(n<0)
			n=(-n);
		printf("%.2f\n",n);	
	}

	return 0;
}

