#include<iostream>
#include<cmath>
using namespace std;
int p[3000];
int db(){
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
	return cnt;
}
int main()
{
	cout<<db();
	for(int i=0;i<1000;i++)
		cout<<p[i]<<' ';
	return 0;
}
