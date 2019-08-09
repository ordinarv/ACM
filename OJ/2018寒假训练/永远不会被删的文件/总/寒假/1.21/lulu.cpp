#include<stdio.h>

int main(void)
{
	int t,a,c;
	scanf("%d",&t);
	while(t--)
	{
		int w[1005]={0};
		scanf("%d%d",&a,&c);
		for(int i=1;i<=1000;i++)
		{
			if(i%a==0||i%c==0)
				w[i]=1;
		}
		int count[15]={0};
		while(a)
		{
			count[a%10]++;
			a/=10;
		}
		while(c)
		{
			count[c%10]++;
			c/=10; 
		}
		int ans=0;
		for(int i=1;i<=1000;i++)
		{
			int v=i;
			while(v)
			{
				if(count[v%10]) 
				{
					w[i]=1;
					break;
				}
				v/=10;	
			}
			if(!w[i])
				ans++;
		}
		
		printf("%d\n",ans);
	}
	
	return 0;
}

