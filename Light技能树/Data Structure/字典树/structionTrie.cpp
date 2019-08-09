#include<bits/stdc++.h>
using namespace std;

const int maxn = 400005;
char s[11];
struct Tire{
	int count;
	
};
int main(){
	int n,m;
	scanf("%d",&n);
	while(n--){	
		scanf("%s",s);
		insert();
	}
	scanf("%d",&m);
	while(m--){
		scanf("%s",s);
		printf("%s\n",search()==1?"YES":"NO");
	}
	
	return 0;
}
