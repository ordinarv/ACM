#include<iostream>
using namespace std;
int main()
{
	int a[20],tr,cnt=0;
	for(int i=0;i<10;i++)
		cin>>a[i];
	cin>>tr;
	for(int i=0;i<10;i++){
		if(a[i]<=tr+30) cnt++;	
	}
	cout<<cnt<<endl;
	return 0;
}
