#include<iostream>
#include<algorithm>
typedef long long ll;
const int maxn=500010;
struct node{
	int val,ord;
}a[maxn];
int tre[maxn],n,aa[maxn];
int lowbit(int x){
	return x&-x;
}
void add(int i,int val){
	for(;i<=maxn;i+=lowbit(i)){
		tre[i]+=val;
	}
}
int sum(int i){
	int ans=0;
	for(;i>0;i-=lowbit(i)){
		ans+=tre[i];
	}
}
using namespace std;
int main(){
	while(cin>>n&&n){
		ll ans=0;
		for(int i=1;i<=n;i++){
			cin>>a[i].val;
			a[i].ord=i;
		}
		sort(a+1,a+1+n);
		for(int i=1;i<=n;i++){//ÀëÉ¢»¯ 
			aa[a[i].ord]=i;			
		}
		for(int i=1;i<=n;i++){
			add(aa[i],1);
			ans+=(i-sum(aa[i]));
		}
		cout<<ans<<endl;
	}
	return 0;
}

