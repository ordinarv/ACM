#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int maxn = 1e5+10;

int f[10005],maxx;
vector<int>mp;
int find(int t) {
	int r=t;
	while(f[r]!=r)
		r=f[r];
	int i,j;
	i=t;
	while(i!=r) { 
		j=f[i];
		f[i]=r;
		i=j;
	}
	return r;
}
void join(int x,int y) {
	int xx=find(x);
	int yy=find(y);
	if(xx!=yy)
		f[xx]=yy;
}
void input(int k) {
	while(!mp.empty())
		mp.pop_back();
	while(k--) {
		int t;
		cin>>t;
		mp.push_back(t);
	}
}
int main() {
	for(int i=0; i<10005; i++) 
		f[i]=i;
	int n;
	cin>>n;
	getchar();
	while(n--) {
		int k;
		cin>>k;
		input(k);
		if(mp.size()>1)
			for(int i=0; i<mp.size()-1; i++) {
				maxx=max(maxx,mp[i]);
				maxx=max(maxx,mp[i+1]);
				join(mp[i],mp[i+1]);
			}
		else {
			maxx=max(maxx,mp[0]);
		}
	}
	int sum=0,k;
	for(int i=1; i<=maxx; i++) {
		if(f[i]==i)sum++;
	}
	cout<<maxx<<" "<<sum<<endl;
	cin>>k;
	while(k--) {
		int x,y;
		cin>>x>>y;
		if(find(x)==find(y))
			cout<<"Y"<<endl;
		else
			cout<<"N"<<endl;
	}
}
