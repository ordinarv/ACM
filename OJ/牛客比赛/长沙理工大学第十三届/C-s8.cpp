#include<iostream>
using namespace std;
int main() {
	int t,k;
	cin>>t;
	while(t--) {
		double a,b;
		cin>>a>>b>>k;
		printf("%.3f\n",b/(a+b));
	}
	return 0;
}
