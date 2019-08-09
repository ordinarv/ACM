#include<iostream>
using namespace std;
int main()
{
	int n,a[110],ans=0;
	cin>>n;
	for(int i=0;i<n;i++)
		cin>>a[i];
	int flag;
	for(int i=0;i<n;i++){
		flag=0;
		for(int j=0;j<n;j++){
			for(int k=j+1;k<n;k++){
				if(a[j]+a[k]==a[i]) {
					ans++;
					flag=1;break;
				}		
			}
			if(flag) break;
		}
				
	}
	cout<<ans<<endl;
	return 0;
}
