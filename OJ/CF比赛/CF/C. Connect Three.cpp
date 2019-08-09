#include<bits/stdc++.h>
using namespace std;
struct unt{
	int x,y;
}coo[5];
bool cmp(unt a,unt b){
	if(a.x == b.x) return a.y < b.y;
	return a.x < b.x;
}
int main() {
	int n = 3;
	for(int i=0; i<3; i++)
		cin>>coo[i].x>>coo[i].y;
	sort(coo,coo+n,cmp);
	
	return 0;
}
