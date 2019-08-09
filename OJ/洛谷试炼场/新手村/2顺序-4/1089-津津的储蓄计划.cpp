#include<iostream>
using namespace std;
int main()
{
	int a,sum=0,my=0,flag=0;
	for(int i=1;i<=12;i++){
		cin>>a;
		if(!flag){
			my+=300;
			if(my>=a){
				my-=a;
			sum+=my/100*100;
			my%=100;
			}
			else flag=i;
		}			
	}
	cout<<(flag?-flag:sum*1.2+my)<<endl;
	return 0;
}
