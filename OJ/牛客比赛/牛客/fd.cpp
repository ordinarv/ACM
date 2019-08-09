#include<bits/stdc++.h>
using namespace std;
struct unt{
	int x,y;
}coor[5];
bool cmp(unt a,unt b){
	if(a.x == b.x) return a.y < b.y;
	return a.x < b.x;
}
int main() {
	int n = 3;
	for(int i=0; i<3; i++)
		cin>>coor[i].x>>coor[i].y;
	sort(coor,coor+n);
	for(int i=0; i<3; i++)
		cout<<coor[i].x<<coor[i].y;
	return 0;
}
