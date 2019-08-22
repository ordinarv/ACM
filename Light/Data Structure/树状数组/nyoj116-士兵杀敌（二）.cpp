#include<bits/stdc++.h>
using namespace std;
const int maxn = 1e6+5;
int c[maxn],a[maxn];
int lowbit(int x){
	return x&(-x);
}
void upd(int i,int val){
	for(;i<=maxn;i+=lowbit(i)){
		c[i] += val;
	}
}
int	getsum(int i){
	int sum = 0 ;
	for(;i>0;i-=lowbit(i))
		sum += c[i];
	return sum;	
}
int main(){
	int n,m;
	scanf("%d%d",&n,&m);
	for(int i=1;i<=n;i++){
		scanf("%d",&a[i]);
		upd(i,a[i]);
	}
	char op[10];
	int a,b;
	for(int i=0;i<m;i++){
		scanf("%s%d%d",op,&a,&b);
		if(op[0]=='Q') printf("%d\n",getsum(b)-getsum(a-1));
		else if(op[0]=='A') upd(a,b);
	}
	return 0;
} 
