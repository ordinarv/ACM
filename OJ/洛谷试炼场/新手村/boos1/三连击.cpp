#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int a,b,c,a1,b1,c1,flag=1;
	cin>>a>>b>>c;
	for(int i=100;i<=333;i++){
		a1=a*i;b1=b*i;c1=c*i;
		if(a1/100+a1/10%10+a1%10+b1/100+b1/10%10+b1%10+c1/100+c1/10%10+c1%10==45&&
			(a1/100)*(a1/10%10)*(a1%10)*(b1/100)*(b1/10%10)*(b1%10)*(c1/100)*(c1/10%10)*(c1%10)==362880)
		{
			cout<<a1<<' '<<b1<<' '<<c1<<endl;
			flag=0;
		}
	}
	if(flag) cout<<"No!!!"<<endl;
	return 0;
}
