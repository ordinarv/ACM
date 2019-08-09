#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int maxn = 1e5+10;
int main(){
	int a[110];
	for(int i=1;i<=9;i++)
		cin>>a[i];
	for(int i=1;i<4;i++){
		for(int j=0;j<3;j++){
			printf("%4d",a[i+3*j]);
		}
		printf("\n");
	}
	return 0;
}
