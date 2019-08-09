#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int maxn = 1e5+5;

int main() {
	int a[] = {1,2,3,4,5},n=5,tra,ans;
	cin>>tra;
	int l = 0,r = n-1,mid;
	while(l<=r){
		mid = (l+r)/2;
		if(a[mid] == tra){
			ans = mid;
			break;
		}
		else if(a[mid] > tra) l = mid + 1;
		else r = mid -1;
	}
	cout<<a[ans-1]<<endl;
	return 0;
}
