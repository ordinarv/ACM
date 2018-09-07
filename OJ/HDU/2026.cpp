#include<iostream>
#include<string> 
using namespace std;
int main()
{
	string s;
	while(getline(cin,s))
	{
		int len=s.size();
		s[0]-=32;
		for(int i = 1 ;i <= len;i++)
		{
			if(s[i-1]==' ')
				s[i]-=32;
		}
		cout<<s<<endl;
	}	
	return 0;	
}
