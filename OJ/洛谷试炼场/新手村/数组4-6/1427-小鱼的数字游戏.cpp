#include<iostream>
#include<string>
using namespace std;
int main()
{
	int a[110],i;
	for(i=0;;i++){
		cin>>a[i];
		if(a[i]==0) break;		
	}
	for(int j=i-1;j>=0;j--)
		cout<<a[j]<<' ';
	cout<<endl;
	return 0;
}
