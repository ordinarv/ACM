#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int maxn = 1e4+10;
int f[maxn];
int cnt;
void init(){
	for(int i=0;i<maxn;i++){
		f[i] = i;
	}
}
int find(int x){
	return x==f[x]?x:f[x] = find(f[x]);
}
int join(int x,int y){
	int fx = find(x),fy = find(y);
	if(fx != fy) {
		f[fy] = fx;
		cnt++;
	}
}
 
int main()
{
	init();
	int n,k,x,y;
	set<int>st;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>k;
		cin>>y;
		st.insert(y);
		for(int j=0;j<k-1;j++){
			cin>>x;
			st.insert(x);	
			join(x,y);
			y = x;		
		}
	}
	int q,a,b,N = st.size();
	cout<<N<<' '<<N-cnt<<endl;
	cin>>q;
	for(int i=0;i<q;i++){
		cin>>a>>b;
		if(find(a) == find(b)) cout<<"Y"<<endl;
		else cout<<"N"<<endl;
	}
	return 0;
}
