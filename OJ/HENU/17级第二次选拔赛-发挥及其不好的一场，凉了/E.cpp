#include<bits/stdc++.h>

using namespace std;
typedef long long ll;
const ll maxn=1e12+10;
int vis[100000];
int cnt;
void db()
{
	cnt=0;
	for(int i=1; i<10000; i++)
	{
		vis[cnt++]=i*i*i;
	}
}
int main()
{
	ll n;
	while(scanf("%lld",&n)!=EOF)
	{
		int flag=0;
		db();
		for(int i=0; i<cnt; i++)
		{
			for(int j=i+1; j<cnt; j++)
			{

				if((vis[j]-vis[i])==n)
				{
					flag=1;
					break;
				}
			}
		}
		if(flag) cout<<"yes";
		else cout<<"no";
	}

return 0;
}
