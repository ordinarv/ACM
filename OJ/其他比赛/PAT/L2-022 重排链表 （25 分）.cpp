#include<bits/stdc++.h>
using namespace std;
const int maxn = 1e5+5;
struct unt {
	string cur,next;
	int val;
} a[maxn],ans[maxn];
int main() {
	int n,sti;
	string st,s;
	cin>>st;
	cin>>n;
	for(int i=0; i<n; i++) {
		cin>>a[i].cur>>a[i].val>>a[i].next;
		if(a[i].cur == st) {
			sti = i;
		}
	}
	int k=0;
	ans[++k] = a[sti];  
	string next = a[sti].next;
	while(next!="-1"){
		for(int i=0;i<n;i++){
			if(a[i].cur == next){
				ans[++k] = a[i];
				next = a[i].next;
				//cout<<"hh"<<endl;
				break;
			}
		}
	}
	//int len = k%2?(k+1)/2:k/2;
	for(int i=k;i>k/2;i--){
		cout<<ans[i].cur<<' '<<ans[i].val<<' '<<ans[i].next<<endl;
		cout<<ans[k-i+1].cur<<' '<<ans[k-i+1].val<<' '<<ans[k-i+1].next<<endl;
	}
	if(k%2) cout<<ans[k/2+1].cur<<' '<<ans[k/2+1].val<<' '<<ans[k/2+1].next;
	return 0;
}
