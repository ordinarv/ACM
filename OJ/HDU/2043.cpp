#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		char s[55];
		cin>>s;
		int len = strlen(s);
		if(len<8||len>16)
		{
			cout<<"NO"<<endl;
			continue;
		}
		int res=0,f1=1,f2=1,f3=1,f4=1;
		for(int i=0;i<len;i++)
		{
			if(s[i]>=65&&s[i]<=90&&f1)
			{
				f1=0;
				res++;
			}	
			else if(s[i]>=97&&s[i]<=122&&f2)
			{
				f2=0;
				res++;
			}
			else if(s[i]>=48&&s[i]<=57&&f3)
			{
				f3=0;
				res++;
			}
			else if((s[i]=='~'||s[i]=='!'||s[i]=='@'||s[i]=='#'||s[i]=='$'||s[i]=='%'||s[i]=='^')&&f4)
			{
				f4=0;
				res++;
			}
		}
		if(res>=3) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;		
	}
	return 0;
}

