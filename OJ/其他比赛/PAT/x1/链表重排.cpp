#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int maxn = 1e5+5;
struct unt{
	string cur,next;
	int val;
}lt[maxn],a[maxn];
int main() {
	int n,string st,s;
	cin>>st>>n;
	for(int i=0;i<n;i++){
		cin>>
	}
	int cnt=0,k = 0;
	for(int i=0;i<n;i++){
		if(vis[lt[i].val]){
			b[k-1].next = lt[i].cur;
			b[k++] = lt[i];
		}
		else{
			b[k-1].next = lt[i].cur;
			b[k++] = lt[i];
		}
	}
	
	return 0;
}
