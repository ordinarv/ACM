#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int maxn = 1e3+10;
int n;
vector<string>ans;
int dfs(int x,int sum,string s) {
	if(sum > n) return 0;
	if(sum == n) {
		//ans.push_back(s);
		cout<<s<<endl;
		return 0;
	}
	for(int i=1;i<=x;i++){
		if(sum+i <= n){
			dfs(i,sum+i,s+char(i+48));
		}		
	}
}

int main() {
	cin>>n;
	for(int i=1; i<=n; i++) {
		string s="";
		s=s+char(i+48);
		dfs(i,i,s);
	}
	//sort(ans.begin(),ans.end());
	int cnt = 0;
	for(int i=0;i<ans.size();i++){
		cout<<ans[i]<<endl;
		/*cnt++;
		cout<<n<<"="<<ans[i][0];
		for(int j=1;j<ans[i].length();j++){
			cout<<'+'<<ans[i][j];
		}
		
		if(cnt%4 == 0 || i == ans.size()-1) cout<<endl;
		else cout<<";"; 
		*/
	}
	return 0;
}
/*
7=1+1+1+1+1+1+1;
7=1+1+1+1+1+2;
7=1+1+1+1+3;
7=1+1+1+2+2
7=1+1+1+4;
7=1+1+2+3;
7=1+1+5;
7=1+2+2+2
7=1+2+4;
7=1+3+3;
7=1+6;
7=2+2+3
7=2+5;
7=3+4;
7=7
*/





