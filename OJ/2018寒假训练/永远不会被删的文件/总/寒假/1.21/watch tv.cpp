#include<stdio.h>
#include<algorithm>
#include<string.h>
using namespace std;
struct unt{
	int f=0;
	int e=0;
};
bool cmp(unt a,unt b)
{
	return a.e<b.e;
	
}
int main(void)
{
	struct unt a[105];
	int n;
	while(scanf("%d",&n))
	{
		
		if(n==0)
			break;
		for(int i=0;i<n;i++)
			scanf("%d%d",&a[i].f,&a[i].e);
		sort(a,a+n,cmp);
		int day=a[0].e,ans=1;
		for(int i=1;i<n;i++)
		{
			if(a[i].f>=day)
			{
				day=a[i].e;
				ans++;
			}
			
		}
		printf("%d\n",ans);
	}
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
 
