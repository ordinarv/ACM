#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>

using namespace std;
typedef unsigned long long ull;
const int maxlen = 1e6+5; 
const int maxn = 1e5+5;
ull h[maxn],h1[maxn],h2[maxn];

char s1[maxlen],s2[maxlen];
int len1,len2;

ull pow(ull x,ull y){
	ull ans = 1;
	while(y){
		if(y&1) ans = ans*x;
		x *= x;
		y >>= 1;
	}
	return ans;
}
int check(int len){
	ull p = pow((ull)133,(ull)len);
	for(int i=len;i<=len1;i++)
		h[i-len] = h1[i]-h1[i-len]*p;
	sort(h,h+len1-len+1);
	
	for(int i=len;i<=len2;i++)
		if(binary_search(h, h+len1-len+1, h2[i]-h2[i-len]*p)) return 1;	
	return 0;
}

int main(){
	while(~scanf("%s",s1)){
		scanf("%s",s2);
		len1 = strlen(s1),len2 = strlen(s2);
		h1[0] = 0;
		for(int i=1;i<=len1;i++)
			h1[i] = h1[i-1]*133 + s1[i-1];
		
		h2[0]=0;
		for(int i=1;i<=len2;i++)
			h2[i] = h2[i-1]*133 + s2[i-1];
				
		int l=1,r=min(len1,len2)+1,mid;//binary sub length
		int ans = 0;
		while(l < r){
			mid = l + (r-l)/2;
			if(check(mid)){
				ans = mid;
				l = mid+1;
			}
			else r = mid;
		}
		printf("%d\n",ans);
	}
	
	
	return 0;
}
