#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int maxn = 1e5+10;
int main(){
	int n = 9;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=i;j++){
			printf("%d*%d=%-3d",i,j,i*j);
		}
		printf("\n");
	}
	return 0;
}
