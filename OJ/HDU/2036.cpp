#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
struct unt {
	int x,y,rx,ry;

} mp[110];
int main() {
	int n;
	while(cin>>n&&n) {
		cin>>mp[0].x>>mp[0].y;
		for(int i=1; i<n; i++) {
			cin>>mp[i].x>>mp[i].y;
			mp[i].rx=(mp[0].x-mp[i].x),mp[i].ry=(mp[0].y-mp[i].y);
		}
		double sum=0;
		for(int i=1; i<n-1; i++) {
			sum+=(double)(mp[i].rx*mp[i+1].ry-mp[i+1].rx*mp[i].ry);
		}
		cout<<fixed<<setprecision(1)<<sum/2<<endl;
	}
	return 0;
}
