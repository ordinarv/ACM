#include<iostream>

using namespace std;
long long f[1010],sum[1010];
void magic(){
	f[1]=1;f[2]=2;
	sum[1]=1;sum[2]=3;
	for(int i=3;i<1001;i++){
		f[i]=sum[i/2]+1;
		sum[i]=sum[i-1]+f[i];
	}
	
}
int main(){
	
	int n;
	magic();
	while(cin>>n){
	
		
		cout<<f[n]<<endl;
	}

	
	return 0;
}
 
