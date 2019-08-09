#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int maxn = 1e3+5;
int f[maxn];

int find(int x){
	return x==f[x]?x:find(f[x]);
}
int join(int x,int y){
	int xx = find(x),yy = find(y);
	if(xx != yy){
		f[xx] = yy;
	}
}
void init(){
	for(int i=0;i<=maxn;i++)
		f[i] = i;
}

int main() {

	
	return 0;
}
