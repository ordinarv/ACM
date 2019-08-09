#include<iostream>//Ð¡»ð²ñ 

using namespace std;
int f[15]={6,2,5,5,4,5,6,3,7,6};
int com(int a){
	
	int b=a,sum=0;
	if(b==0) return f[0];
	while(b){
		sum+=f[b%10];
		b/=10;
	}
	
	return sum;
}

int main(){
	
	int n,cnt=0;
	cin>>n;n-=4;
	for(int i=0;i<1000;i++){
		for(int j=0;j<1000;j++){
			int a=com(i),b=com(j),c=com(i+j);			
			if(a+b+c==n)	{
				cnt++;
			//	cout<<i<<' '<<j<<endl;
				//cout<<a<<' '<<b<<' '<<c<<endl;
			}	
		}		
	}	
	cout<<cnt<<endl;
	return 0;
} 
