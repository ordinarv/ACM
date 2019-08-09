#include<stdio.h>
 
int main(void)
{
	int a[255],flag;
	for(int i=1;i<=250;i++)
	{
		flag=1;
		scanf("%d",&a[i]);
		if(a[i]<=0) 
			break;
		if(a[i]==1||a[i]==2)
			printf("%d: no\n",i);
		else
		{
		 
   			for(int j=2;j<a[i];j++)
			{
			   	if(a[i]%j==0)
				{
				   	flag=0;
				   	break;
				}   	
			}
			if(flag)
				printf("%d: yes\n",i);
			else
				printf("%d: no\n",i);  
        }
		
	}
	return 0;
}
 
