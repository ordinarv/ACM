#include<iostream>
using namespace std;
int main()
{
	int a,b;
	while(cin>>a>>b){
		int ans=0,cnt=1;
		while(a||b){		
			ans+=((a%10+b%10)%10)*cnt;
			cnt*=10;
			a/=10;b/=10;
			
		}
		cout<<ans<<endl;		
	} 	
	return 0;
}
