#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int n,a,b,x,flag=1,ans; 
	cin>>n;
	for(int i=0;i<3;i++){
		cin>>a>>b;
		if(a>=n){
			x=1;
		}
		else{
			x=n/a;
			if(n%a) x++;
		}
		if(flag){
			ans=b*x;
			flag=0;
		}
		ans=min(b*x,ans);
	}
	cout<<ans<<endl;
	return 0;
}
