#include<iostream>
using namespace std;
int main()
{
	int a,b,c;
	for(int i=123;i<330;i++){
		a=i;b=i*2;c=i*3;
		if(a%10+a/10%10+a/100+b%10+b/10%10+b/100+c%10+c/10%10+c/100==45
		&&(a%10)*(a/10%10)*(a/100)*(b%10)*(b/10%10)*(b/100)*(c%10)*(c/10%10)*(c/100)==362880)
		cout<<a<<' '<<b<<' '<<c<<endl;
	} 

	return 0;
}
