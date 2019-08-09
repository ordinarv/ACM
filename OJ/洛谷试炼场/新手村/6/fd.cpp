#include<iostream>//Ð¡»ð²ñ 

using namespace std;
int f[15]={6,2,5,5,4,5,6,3,7,6};
int com(int a){
	
	int b=a,sum=0;
	while(b){
		sum+=f[b%10];
		b/=10;
	}
	return sum;
}

int main(){
	
	int n,cnt=0;
	cin>>n;n-=4;
	for(int i=0;i<10;i++)
		cout<<f[i]<<endl;
	return 0;
} 
