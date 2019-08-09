#include<bits/stdc++.h>

using namespace std;
int a[25],k;
int flag=0;
int dfs(int ip,int sum)
{
	int x=ip+1;
	if(sum>k) return;
	else if(sum==k) flag=1;
	dfs(x,sum+a[x]);
	dfs(x,sum);

int main() 
{
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
		cin>>a[i];
	cin>>k;dfs(0,0);
	if(flag) cout<<"of couse"<<endl;
	else cout<<"no"<<endl;
	
	
	return 0;
}
