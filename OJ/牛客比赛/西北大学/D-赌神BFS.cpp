#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll maxn = 1e9;
struct unt{
	int m,step;
};
void BFS(){
	unt cur,next;
	cur.m = 1;cur.step = 0;
	queue<unt> q;
	q.push(cur);
	while(!q.empty()){
		cur = q.front();q.pop();
		
		next.m = cur.m * 2;
		next.m = cur.m + 1;
		if(next.m <= maxn && )
		
		if(next.m == n){
			return next.step;
		}
	}
}
int main(){
	int n;
	while(cin>>n){
		BFS(1);
		
	}
	return 0;
} 
