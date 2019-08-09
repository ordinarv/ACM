#include<iostream>

using namespace std;
bool judge(int a,int b,int c)
{
	if((a%10+a/10%10+a/100+c%10+c/10%10+c/100+b%10+b/10%10+b/100==45)&&((a/100)*(a/10%10)*(a%10)*(b/100)*(b/10%10)*(b%10)*(c/100)*(c/10%10)*(c%10)==362880))
		return true;
	else
		return false;	
}
int main()
{
	for(int i =100 ;i <= 333;i++)
	{
		int a1=i;
		int b1=i * 2;
		int c1=i * 3;
		if(judge(a1,b1,c1))
			cout<<a1<<' '<<b1<<' '<<c1<<endl;		
	}
	return 0;
}

