#include<iostream>
using namespace std;
int main()
{
	int t;
	while(cin>>t&&t){
		int a[110],sum=0;
		for(int i=0;i<t;i++)
			cin>>a[i];
		for(int i=0;i<t;i++){
			if(a[i]>=100){
				sum+=(a[i]/100);
				a[i]%=100;	
			}
			if(a[i]>=50){
				sum+=(a[i]/50);
				a[i]%=50;	
			}
			if(a[i]>=10){
				sum+=(a[i]/10);
				a[i]%=10;	
			}if(a[i]>=5){
				sum+=(a[i]/5);
				a[i]%=5;	
			}
			if(a[i]>=2){
				sum+=(a[i]/2);
				a[i]%=2;	
			}
			sum+=a[i];
		}
		cout<<sum<<endl;	
	}
	
	return 0;
}
