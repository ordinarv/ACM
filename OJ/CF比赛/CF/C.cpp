#include<bits/stdc++.h>
using namespace std;
struct unt {
	int x,y;
} coo[5];
bool cmp(unt a,unt b) {
	if(a.x == b.x) return a.y < b.y;
	return a.x < b.x;
}
int main() {
	int n = 3;
	int x,y,minx=1000,miny=1000,maxx=0,maxy=0;
	for(int i=0; i<3; i++) {
		cin>>x>>y;
		maxx = max(maxx,x);
		minx = min(minx,x);
		maxy = max(maxy,y);
		miny = min(miny,y);
		coo[i].x = x;
		coo[i].y = y;
	}
	sort(coo,coo+n,cmp);
	int ans = maxx - minx + (maxy - miny) + 1;
	cout<<ans<<endl;

	int tem = min(coo[0].y,min(coo[1].y,coo[2].y));
	while(tem<=maxy) {
		cout<<coo[1].x<<' '<<tem<<endl;
		tem++;
	}


	tem = coo[0].x;
	while(tem<coo[1].x) {
		cout<<tem<<' '<<coo[0].y<<endl;
		tem++;
	}

	tem = coo[1].x+1;
	while(tem<=coo[2].x) {
		cout<<tem<<' '<<coo[2].y<<endl;
		tem++;
	}

	return 0;
}
