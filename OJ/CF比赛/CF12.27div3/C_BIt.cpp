#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int INF = 0x3f3f3f3f;
const int maxn = 2e5+5;
int d[35];
int len = 30;
int n,k;
void db() {
	d[0] = 1;
	for(int i=1; i<=len; i++) {
		d[i] = d[i-1] * 2;
		//cout<<i<<' '<<d[i]<<endl;
	}
}
int cnt;
vector<int> ans;
priority_queue<int,vector<int>, greater<int> >q; 
void bit(int n){//位运算将n个数最小拆 
	int cnt = 0;
	for(int i=0;i<=len;i++){
		if(n&(1<<i)){
			q.push(1<<i);
			cnt++;
		}
	}
	if(cnt > k) //NO
	
}
int solve(int n) {
	int sum = 0 ;
	bit(n);
	while(n) {
		for(int i=len; i>=0; i--) {
			if(d[i]<=n) {
				n-=d[i];
				q.push(d[i]);
				len = i;				
				//cout<<d[i]<<endl;
				//break;
			}
		}
	}
	int flag = 0,tem;
	while(!q.empty()){
		if(q.size() + cnt == k) {
			flag = 1;
			break;
		}
		tem = q.top();
		q.pop();
		if(tem == 1){
			++cnt;
			//ans.push_back(1);
			//ans[++cnt] = 1;
		}
		else {
			q.push(tem/2);q.push(tem/2);
		}
		
	}
	return flag;
}

int main() {
	db();
	scanf("%d%d",&n,&k); 
	if(solve1(n)) {
		printf("YES\n");
		
		
		for(int i=0;i<cnt;i++){
			printf("1 ");
			//cout<<1<<' ';
		}
		while(!q.empty()){
			printf("%d ",q.top());
		//	cout<<q.top()<<' ';
			q.pop(); 
		} 
		/**/
	}
	else printf("NO\n");
	
	return 0;
}
