#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int maxn = 3e5+5;
const int INF = 0x3f3f3f3f;
ll n,m;
int main() {
    cin>>n>>m;
    if(n/m < 6 || n>m*9) cout<<"jgzjgzjgz"<<endl;
    else if(n>=m*7){
        cout<<"0"<<endl;
    }
    else{
        cout<<m-(n-(m * 6))<<endl;
    }
	return 0;
}
