#include<iostream>
using namespace std;
int main()
{
	
	double tar,bg=2,sum=0; 
	int cnt=0; 
	cin>>tar;
	while(sum<tar){ 
		sum+=bg;
		bg*=0.98;
		cnt++;
	}
	cout<<cnt<<endl;
	return 0;
}
