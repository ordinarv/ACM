#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int maxn = 1e5+5;

int main() {
	int n = 10;
	int a[10] = {0,1,2,3,4,5,6,7,8,9};
	for(int i=0;i<n;i++){
		cout<<a[i]<<' ';
	}
	reverse(a,a+5);
	for(int i=0;i<n;i++){
		cout<<a[i]<<' ';
	}
	return 0;
}
