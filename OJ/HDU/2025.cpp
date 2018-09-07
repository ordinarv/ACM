#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	char s[110];
	while(cin>>s)	
	{
		int len=strlen(s);
		char max='A';
		for(int i=0;i<len;i++)
			if(s[i]>=max)	
				max=s[i];
		for(int i=0;i<len;i++)
		{
			cout<<s[i];
			if(s[i]==max) cout<<"(max)";
		}
		cout<<endl;		
	}
	return 0;
}

