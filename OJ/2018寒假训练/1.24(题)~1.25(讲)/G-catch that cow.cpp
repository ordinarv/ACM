#include<stdio.h>
#include<queue>
using namespace std;
 
int n,k;
int ans[100005]={0};
int flag[100005]={0};
queue<int> q1;
int bfs(int x,int y)
{
	q1.push(x);
	flag[q1.front()]=1;

	while(!q1.empty())
	{
		int t=q1.front();
		q1.pop();
		for(int i=0; i<3; i++)
		{
			int v;
			if(i==0) v=2*t;
			else if(i==1) v=t-1;
			else if(i==2) v=t+1;
			if(v>2*y||v<0||v>100000) continue;
			if(!flag[v])
			{
				flag[v]=1;
				q1.push(v);
				ans[v]=ans[t]+1;
			}
			
			if(v==y) return ans[v];
		}
	}
}

int main(void)
{
	//memset(ans,0,sizeof(ans));
	//memset(flag,0,sizeof(flag));
	scanf("%d%d",&n,&k);
	if(n>=k) printf("%d\n",n-k);
	else printf("%d\n",bfs(n,k));
	return 0;
}

