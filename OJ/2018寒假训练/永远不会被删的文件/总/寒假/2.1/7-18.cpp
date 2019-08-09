#include<stdio.h>
#include<queue>
using namespace std;
int main()
{
	int a[1010],n;
	queue<int> qa,qb;
	scanf("%d",&n);

	while(!qa.empty())
		qa.pop();
	while(!qb.empty())
		qb.pop();

	for(int i=0; i<n; i++)
	{
		scanf("%d",&a[i]);
		if(a[i]%2!=0)
			qa.push(a[i]);
		else
			qb.push(a[i]);
	}
	int flag=1;
	
	while(qa.size()>=2)
	{
		if(flag)
		{
			printf("%d",qa.front());
			qa.pop();
			flag=0;
		}
		else
		{
			printf(" %d",qa.front());
			qa.pop();
		}
		printf(" %d",qa.front());
		qa.pop();
		if(!qb.empty())
		{
			printf(" %d",qb.front());
			qb.pop();
		}
	}
	while(!qa.empty())
	{
		printf(" %d",qa.front());
		qa.pop();
	}
	
	while(!qb.empty())
	{
		printf(" %d",qb.front());
		qb.pop();
	}
	printf("\n");
	


	return 0;
}

