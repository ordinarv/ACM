#include<stdio.h>

int main()
{
	char s[40];
	scanf("%s",s);
	int a=0,b=0,c=0,d=0;
	int cnt=7;
	for(int i=0;i<8;i++)
	{
		
		if(s[i]==49)
		{
			int x=1;	
			for(int j=0;j<cnt;j++)
			{
				x*=2;
			}
			a+=x;
		}
		cnt--;	
	}
	cnt=7;
	for(int i=8;i<16;i++)
	{
		
		if(s[i]==49)
		{
			int x=1;	
			for(int j=0;j<cnt;j++)
			{
				x*=2;
			}
			b+=x;
		}
		cnt--;		
	}
	cnt=7;
	for(int i=16;i<24;i++)
	{
		if(s[i]==49)
		{
			int x=1;	
			for(int j=0;j<cnt;j++)
			{
				x*=2;
			}
			c+=x;
		}
		cnt--;		
	}
	cnt=7;
	for(int i=24;i<32;i++)
	{
		if(s[i]==49)
		{
			int x=1;	
			for(int j=0;j<cnt;j++)
			{
				x*=2;
			}
			d+=x;
		}
		cnt--;		
	}
	
	printf("%d.%d.%d.%d\n",a,b,c,d);
	
	return 0;
}


