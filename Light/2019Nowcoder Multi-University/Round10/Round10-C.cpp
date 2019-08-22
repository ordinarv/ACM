#include<bits/stdc++.h>ts/stdc++.h>
using namespace std;
typedef long long ll;
const int maxn = 1e6+5;

string s;
int n;
struct node{
	char p,v;
}a[maxn];
int main() {

	scanf("%d",&n);
	for(int i=1; i<=n; i++) {
		scanf("%c%c",&a[i].p,&a[i].c);
		s += a[i].c;
	}
	init();
}
