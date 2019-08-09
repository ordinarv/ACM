#include<stdio.h>
#include<algorithm>
using namespace std;

int main()
{
	int k;
	while(scanf("%d",&k)!=EOF)
	{
		int a[8],b=k,cnt=0,ans=0,sum=0;
		while(b)
		{
			a[cnt]=b%10;
			b/=10;
			sum+=a[cnt++];			
		}
		if(sum==10)
		{
			printf("%d",k);
			continue;
		}
		if(sum>10)
			continue;
		a[cnt]=10-sum;
		sort(a,a+cnt+1);
		
		for(int i=0;i<cnt;i++)
		{
			ans+=a[i];
			ans*=10;	
		}
		printf("%d\n",ans+a[cnt]);
				
	}	
	return 0;
}
