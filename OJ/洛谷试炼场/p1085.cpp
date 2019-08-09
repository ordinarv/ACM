#include<iostream>
using namespace std;
int main()
{
	int x,y,ans,m=0;
	for(int i=1;i<=7;i++){
		cin>>x>>y;
		if(x+y>m){
			m=x+y;
			ans=i;
		}
	}
	cout<<ans<<endl;	
	
	return 0;
}
