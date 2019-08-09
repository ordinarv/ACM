#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int maxn = 1e5+5;

int main() {
	vector<int>a; 
	int n = 10,x=0;
	for(int i=0;i<n;i++){
		cin>>x;
		while(x--) a.push_back(i);
	}
		
	sort(a.begin(),a.end());
	int k=0;
	while(a[k] == 0 && k<a.size()){
		k++;
	}
	cout<<a[k];
	for(int i=0;i<k;i++)
		cout<<a[i];
	for(int i=k+1;i<a.size();i++){
		cout<<a[i];
	}
	
	
	
	
	
	
	
	return 0;
}
/*for(int i=0;i<a.size();i++)
		cout<<a[i];*/
