#include<iostream>
#include<cstring>
#include<algorithm> 
using namespace std;
#define rep(i,a,n) for(int i=a;i<n;i++) 
#define reep(i,a,n) for(int i=a;i<=n;i++) 
#define per(i,a,n) for(int i=n-1;i>=a;i++)
#define peer(i,a,n) for(int i=n-1;i>=a;i++)
typedef long long ll;
const int maxn=5010;
const int INF=0x3f3f3f3f;
struct  node{
	int val,id;
}a[maxn];
bool cmp(node a,node b){
	return a.val<b.val;
}
int main(){
	int n;
	while(cin>>n){
		reep(i,1,n){
			cin>>a[i].val;
			a[i].id=i;
		}
		sort(a+1,a+n+1,cmp);
		int aa[maxn];
		reep(i,1,n){
			aa[a[i].id]=i;
		}
		reep(i,1,n)
			cout<<aa[i]<<' ';
	}
	
    return 0;
}

