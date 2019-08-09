#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int maxn = 1e5+10;
int len;
bool check(int x,int y){
	if(x>=0 && y<len) return true;
	return false;
}
int main(){
	string s;
	getline(cin,s);
	len = s.length();
	int ans = 0;
	for(int i=0;i<len;i++){//Ã¶¾ÙÆðµã 
		//odd 
		int l=i-1,r=i+1,res=0;
		while(check(l,r) && s[l] == s[r]){
			res++;l--;r++;
		}	
		ans = max(ans,res*2+1);
		//even	
		if(s[i] == s[i+1]){
			l=i-1;r=i+2;res=0;
			while(check(l,r) && s[l] == s[r]){
				res++;l--;r++;
			}
			ans = max(ans,(res+1)*2);
		}	
	}
	cout<<ans<<endl;
	return 0;
}
