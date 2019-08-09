#include<bits/stdc++.h>

using namespace std;
char c[110][110];
int n,m;
void dfs(int rx,int ry)
{
	if(rx<1||ry<1||rx>n||ry>m) return;
	for(int x=-1;x<=1;x++)
	{
		for(int y=-1;y<=1;y++)
		{
			int tx=rx,ty=ry;
			tx+=x;
			ty+=y;
			if(c[tx][ty]=='@')
			{
				c[tx][ty]='*';
				dfs(tx,ty);
			}
		}
	}
	
}
int main()
{
	while(cin>>n>>m)
	{
		for(int i=1;i<=n;i++)
			for(int j=1;j<=m;j++)
				cin>>c[i][j];
		int cnt=0;
		for(int i=1;i<=n;i++)
			for(int j=1;j<=m;j++)
			{
				if(c[i][j]=='@')
				{
					dfs(i,j);
					cnt++;
				}
				
			}
		cout<<cnt<<endl;
	}	
	
	return 0;
}

