#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int maxn = 1e5+10;
int main(){
	int a[6][6],n=5,sum=0;
	for(int i=1;i<n;i++){
		for(int j=1;j<n;j++){
			cin>>a[i][j];
			if(j<=i) sum+=a[i][j];
		}
	}
	cout<<sum<<endl;
	return 0;
}
