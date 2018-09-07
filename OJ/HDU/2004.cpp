#include<iostream>

using namespace std;
int main()
{
	int n;
	while(cin>>n)
	{
		if(n>=90&&n<=100)
			cout<<'A';
		else if(n>=80&&n<=89) 
			cout<<'B';
		else if(n>=70&&n<=79)
			cout<<'C';
		else if(n>=60&&n<=69)
			cout<<'D';
		else if(n>=0&&n<=59)
			cout<<'E';
		else
			cout<<"Score is error!";
		cout<<endl;
	}	
	return 0;
}


