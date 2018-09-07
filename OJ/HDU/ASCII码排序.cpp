#include<iostream>

using namespace std;
int main()
{
	char a,b,c,x;
	while(cin>>a>>b>>c)
	{
		if(a<b){x=b;b=a;a=x;}
		if(a<c){x=c;c=a;a=x;}
		if(b<c){x=c;c=b;b=x;}
		
		cout<<c<<' '<<b<<' '<<a<<endl;
	}	
}
