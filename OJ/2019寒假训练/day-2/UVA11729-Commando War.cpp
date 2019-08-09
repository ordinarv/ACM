#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int maxn = 1e3+5;
struct unt{
	int b,j;
}soldier[maxn];

bool cmp(unt a,unt b){
	if(a.b == b.b) return a.b < b.b;
	return a.j > b.j;
}
int main() {
	int n,t=0;
	while(~scanf("%d",&n) && n){
		for(int i=0;i<n;i++)
			scanf("%d%d",&soldier[i].b,&soldier[i].j);
		sort(soldier,soldier+n,cmp);
		int com = 0,ans = 0;
		for(int i=0;i<n;i++){
			com += soldier[i].b;
			if(com + soldier[i].j > ans)
				ans = com + soldier[i].j;			
		}
		cout<<"Case "<<++t<<": "<<ans<<endl;
	}
	return 0;
}
