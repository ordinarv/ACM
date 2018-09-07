#include<iostream>

using namespace std;
int main()
{
	int n,a[105];
	while(cin>>n) 
	{
		int ans;
		for(int i=0;i<n;i++)
			cin>>a[i];
		for(int i=1;i<210000000;i++)
		{
			int flag=1;
			for(int j=0;j<n;j++) 
			{
				if(i%a[j]!=0)
				{
					flag=0;
					break;
				}
			}
			if(flag)
			{
				ans=i;
				break;
			}
		}
		cout<<ans<<endl;
	}	
}
 
