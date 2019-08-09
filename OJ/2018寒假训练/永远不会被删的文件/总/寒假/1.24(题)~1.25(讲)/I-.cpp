#include<stdio.h>
#include<queue>
#include<string.h>
const int MAXN=1e4+5;
using namespace std;
bool f[MAXN];
int ans[MAXN],vis[MAXN],dig[10];
void isprim(){  //素数打表
	f[0]=1;f[1]=1;
	for(int i=0;i<MAXN;i++){
		if(!f[i]){
			for(int j=i+i;j<MAXN;j+=i)
				f[j]=1;
		}
	}	
}
queue<int> q1;
int bfs(int x,int end){

	q1.push(x);
	vis[x]=1;
	while(!q1.empty())
	{
		int t=q1.front();
		q1.pop();
		dig[3]=t%10;    	//依次为个十百千位； 
		dig[2]=t/10%10;
		dig[1]=t/100%10;
		dig[0]=t/1000%10;
		for(int i=0;i<4;i++)
		{
			int tem=dig[i];
			for(int j=0;j<=9;j++)
			{
				if(j==0&&i==0)  //不加这个判断 case2 过不了 
                continue;  		//四位数 ，第一位不能是0； 
				if(dig[i]!=j)
				{
					dig[i]=j;
					int res=dig[0]*1000+dig[1]*100+dig[2]*10+dig[3];
					if(!f[res]&&!vis[res])
					{
						q1.push(res);
						vis[res]=1;
						ans[res]=ans[t]+1;
					}
					if(res==end) return ans[res];	
				}
				
			}
			dig[i]=tem;//复位； 
		}
	}
	return -1;
}

int main(void)
{
	int T;
	isprim();
	scanf("%d",&T);
	while(T--)
	{
		memset(ans,0,sizeof(ans));
		memset(vis,0,sizeof(vis));
		int x,y;
		while(!q1.empty()) q1.pop();
		scanf("%d%d",&x,&y);
		int k=bfs(x,y);
		if(k!=-1) printf("%d\n",k);
		else  printf("Impossible\n");
	}
	
	return 0;
}
 
