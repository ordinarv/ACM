#include<iostream>
using namespace std;
int main()
{
	int n,x,a,b,cnt=0;
	cin>>n>>x;
	for(int i=1;i<=n;i++){
		a=i;
		while(a){
			b=a%10;
			a/=10;
			if(b==x) cnt++;
		}
		
	}
	cout<<cnt<<endl;
	return 0;
}
