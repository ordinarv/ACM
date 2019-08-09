#include<iostream>

using namespace std;
int cnt;
void magic(int res){
	cnt++;
	int n=res/2;
	for(int i=1;i<=n;i++){
		magic(i);
	}
	
}
int main(){
	
	int n;
	while(cin>>n){
		cnt=0;
		magic(n);
		cout<<cnt<<endl;
	}

	
	return 0;
}
 
