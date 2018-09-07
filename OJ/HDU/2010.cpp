#include<iostream>

using namespace std;
int main()
{
	int m,n;
	while(cin>>m>>n)
	{
		int flag=1,flag1=1;
		for(int i = m;i <= n;i++)
		{
			int a=i/100,b=i%10,c=i/10%10;
			if(a*a*a+b*b*b+c*c*c==i)
			{
				if(flag1)
				{
					cout<<i;
					flag1=0;
				}
				else	
				cout<<' '<<i;
				flag=0;
			}
		}
		if(flag) cout<<"no"<<endl;
		else cout<<endl;
	}
	
	return 0;
}
