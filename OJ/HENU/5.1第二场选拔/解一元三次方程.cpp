#include<iostream>
#include<cmath>
#include<cstdio>
using namespace std;
const int arn=10;
double grade[arn][arn];
int main(){
	double a,b,c,d,ans[5];
	int cnt=0;
	cin>>a>>b>>c>>d;
	for(double i=-100.00;i<=100.00;i+=0.01){
		if(fabs(a*i*i*i+b*i*i+c*i+d)<0.01)
			ans[cnt++]=i;
		
	}
	printf("%.2lf %.2lf %.2lf\n",ans[0],ans[1],ans[2]);
	
	return 0;
}
