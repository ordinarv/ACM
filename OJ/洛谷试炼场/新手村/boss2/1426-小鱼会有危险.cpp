#include<iostream>

using namespace std;
int main(){
	double s,x,a=7,sum=0;
	cin>>s>>x; 
	while(sum<s-x){
		sum+=a;
		a*=0.98;
	}
	if(sum+a>=s+x) cout<<"n"<<endl;
	else cout<<"y"<<endl;
	
	
	return 0;
}
