#include<iostream>
#include<algorithm>
const int maxn=1010;
using namespace std;
int main(){
	int n,a[maxn],b[maxn];
	cin>>n; 
	for(int i=0;i<n;i++)
		cin>>a[i];
	sort(a,a+n);
	int cnt=0;
	for(int i=0;i<n;i++){
		if(a[i]==b[cnt-1])
			continue;
		b[cnt++]=a[i];
	}	
	cout<<cnt<<endl;
	for(int i=0;i<cnt;i++)
		cout<<b[i]<<' ';
	cout<<endl;
	return 0;
} 
