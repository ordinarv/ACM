#include<iostream>
#include<cmath>
using namespace std;
const int maxn=2261; 
int p[3000];
void db(){
	int cnt=0;
	for(int i=2;i<20000;i++){
		int q=sqrt(i),flag=1;
		for(int j=2;j<=q;j++){
			if(i%j==0){
				flag=0	;break;
			}
		}
		if(flag) p[cnt++]=i;
	}
}
int main()
{
	int n,flag=0;
	db();
	cin>>n;
	for(int i=0;i<maxn;i++){
		for(int j=0;j<maxn;j++){
			for(int k=0;k<maxn;k++){
				if(p[i]+p[j]+p[k]==n){
					cout<<p[i]<<' '<<p[j]<<' '<<p[k]<<endl;
					flag=1;break;
				}
			}
			if(flag)break;
		}	
		if(flag)break;
	}		
	return 0;
}
