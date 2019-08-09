#include<iostream>
#include<algorithm>
const int maxn=1e5;
using namespace std;
struct node{
	int x,y;
}cl[maxn];
bool cmp(node a,node,b){
	if(a.x==b.x) return a.y<b.y;
	return a.x<b.x;
}
int main(){
	int n;	
	while(cin>>n){
		for(int i=0;i<n;i++)
			cin>>cl[i].x>>cl[i].y;
		sort(cl,cl+n,cmp);
		for(int i=0;i<n;i++){
			cout<<sum(cl[i].y);
			
		}
	}
		
	return 0;
}
