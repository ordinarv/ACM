#include<iostream>

using namespace std;
int main()
{
	int t;
	cin>>t;
	getchar();
	while(t--)
	{
		char c;
		int cnt=0;
		while(c=getchar())
		{
			if(c=='\n') break;
			if(c>=48&&c<=57)
				cnt++;
		}
		cout<<cnt<<endl;
	}	
	return 0;
}

