#include<stdio.h>
#include<iostream>
#include<stack>
#include<string.h>
using namespace std;
char v[10000000];

int main ()
{
	stack<char>s;
	int T;
	scanf("%d",&T);
	getchar();//若无，则gets直接从缓存中读走； 
	while(T--)
	{

		int lens=s.size();		//qing kong;
		for(int i=0; i<lens; i++)
			s.pop();

		gets(v);
		int len=strlen(v);
		for(int i=0; i<len; i++)
		{
			if(v[i]==' ')
				continue;
			else if(v[i]=='[' || v[i]=='(')
				s.push(v[i]);
			else if(v[i]==')')
			{
				if(s.size()&&s.top()=='(')
					s.pop();
				else
					s.push(v[i]);
			}
			else
			{
				if(s.size()&&s.top()=='[')
					s.pop();
				else
					s.push(v[i]);
			}

		}
		if(s.size())
			printf("No\n");
		else
			printf("Yes\n");
	}
	return 0;
}
