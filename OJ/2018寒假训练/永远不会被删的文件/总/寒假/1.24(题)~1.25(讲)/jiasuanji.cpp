#include <stack>
#include <stdio.h>

using namespace std;


int main()
{
	double n, temp;
	char b, c[2];
	while (scanf("%lf%c", &n, &b))
	{
		if (n == 0 && b == '\n') break;
		double ans = 0;
		stack<double> stk;
		stk.push(n);
		while (scanf("%s%lf",c,&n) != EOF)
		{
			if (c[0] == '+')   stk.push(n);
			else if (c[0] == '-')  stk.push(-n);
			else if (c[0] == '*')
			{
				temp = n*stk.top();
				stk.pop();
				stk.push(temp);
			}
			else
			{
				temp = stk.top()/n;
				stk.pop();
				stk.push(temp);
			}
			if (b = getchar() , b == '\n') break;
		}
		while (!stk.empty())
		{
			ans += stk.top();
			stk.pop();
		}
		printf("%.2lf\n", ans);
	}
	return 0;
}
