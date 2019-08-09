#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int maxn = 1e2+10;
int a[maxn],b[maxn];
int main(){
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i<n;i++){
		cin>>b[i];
	}
	cout<<"Preorder:";
	for(int i=0;i<n;i++){
		cout<<' '<<b[i];
	} 
	cout<<endl;
	return 0;
}
