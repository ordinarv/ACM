#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	int a,b,c,q,w,e,num;
	cin>>q>>w>>e;
	int flag=1;
	for(num=100; num<=333; num++)
	{
		a=q*num;
		b=w*num;
		c=e*num;
		if((a/100+a/10%10+a%10+b/100+b/10%10+b%10+c/100+c/10%10+c%10==45)&&
		((a/100)*(a/10%10)*(a%10)*(b/100)*(b/10%10)*(b%10)*(c/100)*(c/10%10)*(c%10)==362880))		
		{
			cout<<a<<" "<<b<<" "<<c<<endl;
			flag=0;
		}
		
	}
	if(flag)
		cout<<"No!!!"<<endl;
	return 0;
}
