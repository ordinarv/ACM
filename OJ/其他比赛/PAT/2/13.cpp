#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int maxn = 1e5+10;
int a[10];
int main(){
	char c;
	int ans=0;
	while(c != '#'){
		cin>>c;
		if(c>='0' && c<='9') a[c-48]++; 
		else ans++;
	}
	printf("digiter=");
	for(int i=0;i<10;i++){
		printf("%2d",a[i]);
	}
	printf("\nother=%d\n",ans-1);
	return 0;
}
