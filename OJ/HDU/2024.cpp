#include<iostream>
#include<cstring>
using namespace std;
int main() 
{
	int t;
	cin>>t;
	getchar();
	string s;
	while(t--) 
	{
		getline(cin,s);
		int len=s.size(),flag=1;
		if(s[0]=='_'||(s[0]>=65&&s[0]<=90)||(s[0]>='a'&&s[0]<='z'))
			for(int i=1; i<len; i++)
			{
				if((s[i]>=48&&s[i]<=57)||(s[i]=='_')||(s[i]>=65&&s[i]<=90)||(s[i]>='a'&&s[i]<='z'))
					continue;
				else
				{
					flag=0;
					break;
				}
			}
		else
			flag=0;
		if(flag)
			cout<<"yes"<<endl;
		else		
			cout<<"no"<<endl;	
	}
	return 0;
}
