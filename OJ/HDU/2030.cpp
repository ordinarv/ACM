#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	int t;
	char s[300];
	cin>>t;
	getchar();
	while(t--)
	{
		int cnt=0;
		gets(s);
		int len=strlen(s);
		for(int i=0;i<len;i++)
			if(s[i]<0)
				cnt++;		
		cout<<cnt/2<<endl;
	}
	return 0;
}

