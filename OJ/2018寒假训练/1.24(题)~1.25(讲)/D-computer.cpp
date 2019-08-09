#include<stdio.h>
#include<stack>
using namespace std;

int main(void)
{
	stack<double> sk;
	double n,tem;
	char s,c,b;
	while(scanf("%lf%c",&n,&c))
	{
		if(c=='\n'&&n==0) break;
		sk.push(n);
		while(scanf("%c%lf",&s,&n))
		{
			if(s=='+') sk.push(n);
			else if(s=='-') sk.push(-n);
			else if(s=='*')
			{
				tem=sk.top()*n;
				sk.pop();
				sk.push(tem);
			}
			else
			{
				tem=sk.top()/n;
				sk.pop();
				sk.push(tem);
			}
			b=getchar();
			if(b=='\n') break;
		}
		double ans=0;
		while(sk.size())
		{
			ans+=sk.top();
			sk.pop();
		}
		printf("%.2lf\n",ans);
	}
	return 0;
}
