#include<stdio.h>
#include<stack>
#include<queue>
#include<string.h>
using namespace std;

int main(void)
{
	stack<int>s1;
	queue<int>q1;
	int T;
	scanf("%d",&T);
	while(T--)
	{
		char s[10],v[5];
		int l,n,flag=0;

		int qlen=q1.size(),slen=s1.size();
		for(int i=0; i<qlen; i++) //每组数据清空stackandqueue
			q1.pop();
		for(int i=0; i<slen; i++)
			s1.pop();

		scanf("%d%s",&l,s);

		if(strcmp(s,"FILO") == 0)//stack;
		{
			for(int i=0; i<l; i++)
			{
				scanf("%s",v);
				if(v[0]=='I')
				{
					scanf("%d",&n);
					s1.push(n);
					flag++;
				}
				else
				{
					if(flag == 0)
						printf("None\n");
					else
					{
						printf("%d\n",s1.top());
						s1.pop();
						flag--;
					}
				}
			}
		}
		else//queue;
		{
			for(int i=0; i<l; i++)
			{
				scanf("%s",v);
				if(v[0]=='I')
				{
					scanf("%d",&n);
					q1.push(n);
					flag++;
				}
				else
				{
					if(flag == 0)
						printf("None\n");
					else
					{
						printf("%d\n",q1.front());
						q1.pop();
						flag--;
					}
				}
			}
		}		
	}
	return 0;
}

