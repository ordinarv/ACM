#include<iostream>
#include<cmath>
#include<cstdio>
using namespace std;
const double ep=0.01;
int main(){
	double a,b,c,d;
	cin>>a>>b>>c>>d;
	for(double i=-100.00;i<=100.00;i+=ep){
		if(fabs(a*i*i*i+b*i*i+c*i+d)<ep){
			printf("%.2lf ",i);
		}	
	}
	printf("\n");
	
	return 0;
}
