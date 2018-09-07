#include<iostream>

using namespace std;
int main()
{
	int n,y,r;
	char c;
	while(cin>>n>>c>>y>>c>>r)
	{
		int a[12]={31,28,31,30,31,30,31,31,30,31,30,31}; 
		int sum=0;
		if((n%4==0&&n%100!=0)||n%400==0)//ÅĞ¶ÏÊÇ·ñÎªÈòÄê 
			a[1]=29;
		for(int i=0;i<y-1;i++)
			sum+=a[i];
		sum+=r;	
		cout<<sum<<endl;
	}	
	return 0;
}

