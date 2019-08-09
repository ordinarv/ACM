#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int maxn = 1e5+5;

int main() {
	int a,b,c,a1,b1,c1;
	scanf("%d%d%d%d%d%d",&a,&b,&c,&a1,&b1,&c1);
	printf("%d",min(a,b1)+min(b,c1)+min(c,a1));
	return 0;
}
