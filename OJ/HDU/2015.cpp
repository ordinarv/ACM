#include<iostream>

using namespace std;
int main()
{
	int n,m;
	while(cin>>n>>m)
	{
		int a=0,sum=0,flag=1;
		for(int i=1; i<=n-(n%m); i++)
		{
			a+=2;
			sum+=a;
			if(i%m==0)
			{
				if(flag)
				{
					flag=0;
					cout<<sum/m;
				}
				else cout<<' '<<sum/m;
				sum=0;
			}
		}
		if(n%m!=0)
		{
			for(int i=n-(n%m)+1; i<=n; i++)
			{
				a+=2;
				sum+=a;
			}
			cout<<' '<<sum/(n%m)<<endl;
		}
		else
			cout<<endl;
	}
	return 0;
}

