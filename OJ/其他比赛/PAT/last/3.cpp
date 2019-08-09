#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int maxn = 1e5+10;
double a3, a2, a1, a0;
const double eps = 0.001;
double solve(double a) {
	return a3*pow(a,3)+a2*pow(a,2)+a1*a+a0;
}
int main() {
	int flag=1;
	double a,b;
	scanf("%lf%lf%lf%lf",&a3,&a2,&a1,&a0);
	scanf("%lf%lf",&a,&b);
	while((b-a)>eps) {
		if(solve((a+b)/2)==0) {
			printf("%.2f\n",(a+b)/2);
			flag=0;
			break;
		} else if(solve((a+b)/2)*solve(a)>0) a=(a+b)/2;
		else b=(a+b)/2;

	}
	if(flag) printf("%.2f\n",(a+b)/2);
	return 0;
}
