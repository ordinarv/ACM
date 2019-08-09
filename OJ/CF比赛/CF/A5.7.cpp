#include<iostream>
using namespace std;
int main()
{
	int n,a[110],flag=0;
	cin>>n;
	for(int i=0;i<n;i++)
		cin>>a[i];
	for(int i=0;i<n;i++){
		if(a[i]==a[i+1]){
			if(flag) break; 
			flag=1;	 
		}
			
			
		if(a[i+1]>a[i]){
			
		}
		
		
	}
	return 0;
}
