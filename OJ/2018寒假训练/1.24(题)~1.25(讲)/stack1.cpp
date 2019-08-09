#include<stdio.h>
#include<stack>
#include<queue>
using namespace std;


int main(void)
{
	stack<int>s1;
	queue<int>q1;
	int T;
	scanf("%d",&T);
	while(T--)
	{
		int n,flag=0;
		int qlen=q1.size(),slen=s1.size();
		for(int i=0;i<qlen;i++)//每组数据清空stackandqueue 
			q1.pop();
		for(int i=0;i<slen;i++)
			s1.pop();
			
		for(int i=0; i<3; i++)
		{
			scanf("%d",&n);
			q1.push(n);
		}
		
		printf("%d\n",q1.front());

	}



	return 0;
}
