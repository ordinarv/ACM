#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int maxn = 1e5+5;
struct unt{
	int x,y;
}cur;
vector<unt> ans;
int main() {	
	int n,flag =0 ;
	cin>>n;
	set<int> xx,yy;
	for(int x=0;x<=sqrt(n);x++){
		for(int y=0;y<=x;y++){
			if(x*x + y*y == n) {
				flag = 1;
				cur={y,x};
				ans.push_back(cur);
				//xx.insert(cur);
				//xx.insert(y);
				//yy.insert(y);
				//cout<<y<<' '<<x<<endl;
			}
		}
	}
	if(!flag) cout<<"No Solution"<<endl;
	else {
		//set<int>::iterator jt = yy.begin();
		//for(set<int>::iterator it=xx.begin();it!=xx.end();it++){
		for(int i=ans.size()-1;i>=0;i--){
		
			cout<<ans[i].x<<' '<<ans[i].y<<endl;
		}
	}
	return 0;
}
/**/
