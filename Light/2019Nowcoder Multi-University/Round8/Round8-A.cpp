#include<iostream>
using namespace std;
const int maxn = 1e5+5;
char s[maxn];
int mp[maxn],sum[maxn][maxn],up[maxn][maxn],Stack[maxn];

int main(){
	int n,m;
	scanf("%d%d",&n,&m);
	for(int i=1;i<=n;i++){
		scanf("%s",s+1);
		for(int j=1;j<=m;j++){
			if(s[i] == '1') {
				mp[i][j] = 1;
				up[i][j] += up[i-1][j];
				sum[i][j] += sum[i][j-1]+1;
			}
			else {
				mp[i][j] = 
			}
			sum[i][j] = sum[i][j-1] + mp[i]	
			up[i][j] = s[i]=='1'?  
		}
	}
	
	return 0;
} 
