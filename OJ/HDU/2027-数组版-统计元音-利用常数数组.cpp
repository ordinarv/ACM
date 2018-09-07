#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	int t;
	cin>>t;
	getchar();
	char c[]="aeiou",s[110];	
	while(t--)
	{
		int a[10]={0};
		gets(s);
		int len=strlen(s);
		for(int i=0;i<len;i++)
		{
			for(int j=0;j<5;j++)
			{
				if(s[i]==c[j])
					a[j]++;
			}			
		}
		for(int i=0;i<5;i++)
			cout<<c[i]<<':'<<a[i]<<endl;
		if(t!=0)
			cout<<endl;	
	} 
	return 0;
}

