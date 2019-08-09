#include<iostream>
using namespace std;
int main(){
	int n,k;
	cin>>n>>k;
	int a,b,ans=1200,tem;
	for(int i=1;i<k;i++){
		b = i;
		tem = n/b*k + b;
		if(tem/k * (tem %k) == n) {
			ans = min(tem,ans);
		}
		
	}
	cout<<tem<<endl;
	return 0;
}
