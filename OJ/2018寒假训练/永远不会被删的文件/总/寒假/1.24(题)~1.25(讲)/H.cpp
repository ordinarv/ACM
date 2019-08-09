#include<stdio.h>

int n,m;
char s[105][105];
void dfs(int x,int y)
{
	int tx,ty;
	for(int dx=-1; dx<=1; dx++)
		for(int dy=-1; dy<=1; dy++)
		{
			tx=dx+x;
			ty=dy+y;
			if(tx<0||ty<0||tx>=n||ty>=m) continue;
			if(s[tx][ty]=='W')
			{
				s[tx][ty]='.';
				dfs(tx,ty);
			}


		}
}
int main()
{

	scanf("%d%d",&n,&m);
	int ans=0;
	for(int i=0; i<n; i++)
		scanf("%s",s[i]);
	for(int i=0; i<n; i++)
		for(int j=0; j<m; j++)
		{
			if(s[i][j]=='W')
			{
				s[i][j]='.';
				dfs(i,j);
				ans++;
			}
		}
	printf("%d\n",ans);
}

