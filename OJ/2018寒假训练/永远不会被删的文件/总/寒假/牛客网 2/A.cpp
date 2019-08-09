#include<stdio.h>
#include<string.h>
#include<stack>
using namespace std;

int main(void)
{
	char s[105];
	stack<char> s1;
	while(scanf("%s",s)!=EOF)
	{
		
		int len=strlen(s);
		s1.push(s[0]);
		
		for(int i=1;i<len;i++)
		{
			if(s1.empty())
			{
				s1.push(s[i]);
				continue;
			}
			if(s[i]==s1.top())
			{
				//printf("top==%c",s1.top());
				if(s[i]=='O')
					s1.pop();
				else//'o'
				{
					s1.pop();
					if(!s1.empty()&&s1.top()=='O')
						s1.pop();
					else
						s1.push('O');
				}
			}
			else
			s1.push(s[i]);
		}											//change
	
	
	
	
	
	
	
	
	
	
	
	
	
													//change
		int res=0;
		char w[105];
		while(!s1.empty())
		{
			w[res++]=s1.top();
			s1.pop();
		}
		int len2=strlen(w);
		for(int i=res-1;i>=0;i--)
			printf("%c",w[i]);
		printf("\n");	
		
	}
	
	
	
	
	return 0;
}
