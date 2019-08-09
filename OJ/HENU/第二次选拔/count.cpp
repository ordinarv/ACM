#include<bits/stdc++.h>

using namespace std;
int ans;
void magic(int x)
{
	for(int i=1;i<=x/2;i++)
	{
		ans++;
		magic(i);
	}
}
int main()
{
	int t;
	while(scanf("%d",&t)!=EOF)
	{
		ans=0;
		magic(t);
		cout<<ans+1<<endl;
	}
	
	return 0;
}
