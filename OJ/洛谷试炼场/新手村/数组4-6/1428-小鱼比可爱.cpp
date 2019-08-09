#include<iostream>
#include<string>
using namespace std;
int main()
{
	int n,a[110],cnt;
	cin>>n;
	for(int i=0;i<n;i++)
		cin>>a[i];
	for(int i=0;i<n;i++){
		cnt=0;
		for(int j=i-1;j>=0;j--){
			if(a[i]>a[j]) cnt++;	
		}
		cout<<cnt<<' ';
	}
	cout<<endl;
	return 0;
}
