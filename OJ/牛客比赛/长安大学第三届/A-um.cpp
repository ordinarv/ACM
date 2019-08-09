#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	int t;cin>>t;
	while(t--){
		int x,t=12,m=0;
		cin>>x;
		printf("%d:%02d\n",t+x/60,m+x%60);
	
	}
	return 0;
}
