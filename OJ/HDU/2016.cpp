#include<iostream>

using namespace std;
int main()
{
	int n,a[110];
	while(cin>>n&&n)
	{
		int min=1000000,flag=0;
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
			if(min>=a[i])
			{
				min=a[i];
				flag=i;
			}
		}
		cout<<min;
		for(int i=1;i<n;i++)
		{
			if(i==flag) cout<<' '<<a[0];	
			else cout<<' '<<a[i];				
		}
		cout<<endl; 
	}	
	return 0;
}

