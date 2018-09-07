#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int n;
	while(cin>>n&&n)
	{
		int a[110],x;
		for(int i=0;i<n;i++)
			cin>>a[i];
		for(int i=0;i<n-1;i++)
		{
			for(int j=i+1;j<n;j++)
			{
				if(abs(a[i])<abs(a[j]))
				{
					x=a[i];a[i]=a[j];a[j]=x;
				}
			}
		}		
		for(int i=0;i<n-1;i++)
		{
			cout<<a[i]<<' ';
		}
		cout<<a[n-1]<<endl;
	}
	
		
	
	return 0;
}

