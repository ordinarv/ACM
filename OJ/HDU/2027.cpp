#include<iostream>
#include<cstring> 
using namespace std;
int main()
{
	int t;
	char s[110];
	cin>>t;
	getchar();
	while(t--)
	{		
		int a[10];
		gets(s);
		int len=strlen(s);
		memset(a,0,sizeof(a));
		for(int i=0;i<len;i++)
		{
			if(s[i]=='a')
				a[0]++;
			else if(s[i]=='e')
				a[1]++;	
			else if(s[i]=='i')
				a[2]++;
			else if(s[i]=='o')
				a[3]++;	
			else if(s[i]=='u')
				a[4]++;	
		}
		cout<<"a:"<<a[0]<<endl;
		cout<<"e:"<<a[1]<<endl;
		cout<<"i:"<<a[2]<<endl;
		cout<<"o:"<<a[3]<<endl;
		cout<<"u:"<<a[4]<<endl;
		if(t!=0)
			cout<<endl;
	}	
}
