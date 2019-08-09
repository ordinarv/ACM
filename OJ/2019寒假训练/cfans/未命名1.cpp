#include <bits/stdc++.h>
#ifdef PRAGMA
#pragma GCC optimize("Ofast")
#pragma GCC optimize ("unroll-loops")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
#endif
#define fst first
#define snd second
#define fore(i,a,n) for(int i=a;i<n;i++)
#define pb push_back
#define mp make_pair
#define bs binary_search
#define ALL(s) s.begin(),s.end()
#define FIN ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define SZ(n) ((int) (n).size())
#define MAXI ((ll)1e16)
#define MINI ((ll)-1e16)
using namespace std;
typedef long long ll;

ll gcd(ll a, ll b) {
	return b == 0 ? a : gcd(b,a%b);
}
ll lcm(ll a, ll b) {
	return a * (b / gcd(a, b));
}
ll n,l,r;
ll a[200001];
ll dp[200001][3];
map <ll,ll> mapa;

const long long M = 1e9 + 7;

long long mult(long long a, long long b) {
	return (a*b) % M;
}
long long suma(long long a, long long b) {
	return (a+b) % M;
}

ll solve(int i, int prev) {
	if(i==n && prev%3!=0)return 0;
	if(i==n)return 1;
	if(dp[i][prev]!=-1)return dp[i][prev];
	dp[i][prev]=mult(mapa[0],solve(i+1,prev));
	dp[i][prev]=suma(dp[i][prev], mult(mapa[1],solve(i+1,(prev+1)%3)));
	dp[i][prev]=suma(dp[i][prev],mult(mapa[2],solve(i+1,(prev+2)%3)));
	return dp[i][prev];
}
int main() {
	FIN;
	cin >> n >> l  >> r;
	ll c = floor((double)r/3)-ceil((double)l/3)+1;
	mapa[0]=c;
	mapa[1]=c-1;
	mapa[2]=c-1;
	if(l%3==1) {
		mapa[1]++;
		mapa[2]++;
	}
	if(l%3==2) {
		mapa[2]++;
	}
	if(r%3==1) {
		mapa[1]++;
	}
	if(r%3==2) {
		mapa[1]++;
		mapa[2]++;
	}
	memset(dp,-1,sizeof(dp));
	cout << solve(0,0);
}
