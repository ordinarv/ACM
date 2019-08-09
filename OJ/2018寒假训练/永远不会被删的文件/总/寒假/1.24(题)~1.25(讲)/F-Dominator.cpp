#include<stdio.h>
#include<string.h>
bool cmp(unt a,unt b)
{
	return a.len>b.len;
}
struct unt{
	char nm[100005];
	int len[1000];
}yl[1000];

int main(void)
{
	int T;
	scanf("%d",&T)
	while(T--)
	{
		int n;
		scanf("%d",&n);
		for(int i=0;i<n;i++)
		{
			scanf("%s",yl[i].nm)
			yl[i].len=strlen(yl[i].nm);
		}
		sort(yl,yl+n,cmp);
		
		for(int i=1;i<n;i++)
		for(int j=1;j<n;j++)
		{
			for(int k=1;k<n;k++)
			{
				if(yl[i].nm[j]==yl[0].nm[k])
				
			}
			
			
			
		}
		
	}
	
	
	return 0;
}


