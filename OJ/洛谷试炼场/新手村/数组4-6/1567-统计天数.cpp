#include<iostream>
#include<algorithm>
using namespace std;
int a[10000010]; 
int main()
{
	int n,cnt=1,ans=0;
	cin>>n;
	for(int i=0;i<n;i++)
		cin>>a[i];
	for(int i=0;i<n-1;i++){
		if(a[i+1]>=a[i]) cnt++;
		else {
			ans=max(ans,cnt);
			cnt=1;
		}	
	}	 
	cout<<ans<<endl;
	return 0;
}
