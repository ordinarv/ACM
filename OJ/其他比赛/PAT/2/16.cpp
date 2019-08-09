#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int maxn = 1e5+10;
int main(){
	int a,b,n,ax,ay,bx,by;
	
	cin>>a>>b;
	int aa = a,bb = b;
	cin>>n;
	int flag =0;
	for(int i=0;i<n;i++){
		cin>>ay>>ax>>by>>bx;
		int temp = ay+by;
		if(ax == temp && bx == temp) continue;
		else if(ax == temp) a--;
		else if(bx == temp) b--;
		if(a<0) {
			flag = 1;break;
		}
		else if(b<0) {
			flag = -1;break;
		}
	}
	if(flag == 1) printf("A\n%d\n",bb-b);
	else if(flag == -1) printf("B\n%d\n",aa-a);
	return 0;
}
