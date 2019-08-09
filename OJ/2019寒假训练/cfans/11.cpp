#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int maxn = 2e5+5;
const int INF = 0x3f3f3f3f;
int a[maxn];
int main() {
	int x,n;
	scanf("%d",&n);
	for(int i=0;i<n-1;i++){
		scanf("%d",&x);
		a[x]++;
	}
	for(int i=1;i<=n;i++){
		if(a[i] == 0){
			printf("%d\n",i);
			break;
		}
	}
	return 0;
}
