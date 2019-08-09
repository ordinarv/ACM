#include<iostream>
using namespace std;
int main()
{
	int k,i;cin>>k;
	double sn=0;
	for(i=1;;i++){
		sn+=1.0/i;	
		if(sn>k) break; 	
	}
	cout<<i;
	return 0;
}
