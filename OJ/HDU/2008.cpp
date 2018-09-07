#include<iostream>

using namespace std;
int main()
{
	int n;
	double x;
	while(cin>>n&&n)
	{
		int cnt1=0,cnt2=0,cnt3=0;
		for(int i=0;i<n;i++)
		{
			cin>>x;
			if(x>0) cnt1++;
			else if(x<0) cnt2++;
			else cnt3++;
		}
		cout<<cnt2<<' '<<cnt3<<' '<<cnt1<<endl;
	}	
	return 0;
}
