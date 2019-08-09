#include<stdio.h>
#include<string.h>
struct unt{
	char zl[85];
	char cd[85];
	int sm[105];
	int cdm[85]={0};
	int bj[85]={0};
};
int main(void)
{
	int t,m;struct unt sg[105];
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&m);
		for(int i=0;i<m;i++)
		{
			scanf("%s%s%d",sg[i].zl,sg[i].cd,&sg[i].sm);
		}
		for(int j=0;j<m-1;j++)
			for(int i=j+1;i<m;i++)
			{
				if(strcmp(sg[j].cd,sg[i].cd)==0&&sg[j].bj!=0&&sg[i].bj!=0)
				{
					sg[j].cdm++;sg[i].cdm++;
					sg[j].bj=1;sg[i].bj=1;
				}
			}
			
		
		
		
		
		
	}
	
	
	return 0;
}

