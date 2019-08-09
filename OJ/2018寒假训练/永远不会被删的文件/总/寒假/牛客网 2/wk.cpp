#include<stdio.h>
#include<stack>
#include<string.h>
using namespace std;
int main()
{
	char s[500];
	stack<char> s1;
	while (scanf("%s",s)!=EOF)
	{
	
		/*while (!s1.empty())
		{
			s1.pop();
		}*/
		int len=strlen(s);
		s1.push(s[0]);
		
		for(int i=1; i<len; i++)
		{			
			if (s1.empty())
			{
				s1.push(s[i]);
				continue;
			}
			if(s1.top()==s[i])
			{
				if (s[i]=='O')
					s1.pop();
				else
				{
					s1.pop();
					if (s1.top()=='O'&&!s1.empty())
						s1.pop();
					else
						s1.push('O');
				}
			}
			else
				s1.push(s[i]);
		}
		/*while (!s1.empty())
		{
			printf("%c",s1.top());
			s1.pop();
		}*/
	}
	return 0;
}

