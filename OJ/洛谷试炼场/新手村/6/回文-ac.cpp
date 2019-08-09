#include<iostream>
#include<cmath>
using namespace std;
int obj[20000];
int product(){
	int cnt=0;
	for(int i=5;i<10;i++){
		obj[cnt]=i;cnt++;
	} //1
	for(int i=1;i<10;i++){
		obj[cnt++]=i*10+i;
	}//2
	for(int i=1;i<10;i++){
		for(int j=0;j<10;j++){
			obj[cnt++]=i*100+j*10+i;
		}
	}//3
	for(int i=1;i<10;i++){
		for(int j=0;j<10;j++){
			obj[cnt++]=i*1000+j*100+j*10+i;
		}
	}//4
	for(int i=1;i<10;i++){
		for(int j=0;j<10;j++){
			for(int k=0;k<10;k++)
			obj[cnt++]=i*10000+j*1000+k*100+j*10+i;
		}
	}//5
	for(int i=1;i<10;i++){
		for(int j=0;j<10;j++){
			for(int k=0;k<10;k++)
			obj[cnt++]=i*100000+j*10000+k*1000+k*100+j*10+i;
		}
	}//6
	for(int i=1;i<10;i++){
		for(int j=0;j<10;j++){
			for(int k=0;k<10;k++)
				for(int l=0;l<10;l++)
			obj[cnt++]=i*1000000+j*100000+k*10000+l*1000+k*100+j*10+i;
		}
	}//7
	for(int i=1;i<10;i++){
		for(int j=0;j<10;j++){
			for(int k=0;k<10;k++)
				for(int l=0;l<10;l++)
					obj[cnt++]=i*10000000+j*1000000+k*100000+l*10000+l*1000+k*100+j*10+i;
		}
	}//8
	/*for(int i=1;i<10;i++){
		for(int j=1;j<10;j++){
			for(int k=1;k<10;k++)
				for(int l=1;l<10;l++)
					for(int m=1;m<10;m++){
						obj[cnt++]=i*100000000+j*10000000+k*1000000+l*100000+m*10000+l*1000+k*100+j*10+i;
						
					}
			
		}
	}//9
	*/
	return cnt;
}
int main()
{
	int len=14760;
	product();
	int a,b;
	cin>>a>>b;
	for(int i=0;i<len;i++){
		if(obj[i]<a) continue;
		if(obj[i]>b) break;
		int q=sqrt(obj[i]),j,flag=1;
		for(j=2;j<=q;j++){
			if(obj[i]%j==0){
				flag=0;
				//cout<<obj[i]<<"res"<<j<<endl;				
				break;
			}
				
		}
		if(flag)cout<<obj[i]<<endl;
	}
	

	return 0;
}
