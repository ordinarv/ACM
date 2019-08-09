#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int maxn = 1e5+10;
int a[]={1,2,4,6,8,9,12,15,149,156};
int main(){
	int n,flag = 1;
	cin>>n;
	for(int i=0;i<10;i++){
		if(flag && a[i]>n) printf("%5d",n),flag = 0;
		printf("%5d",a[i]);
		
	}
	return 0;
}
