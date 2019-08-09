#include<stdio.h>
#include<algorithm>
#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	int a[15],b[15],c[15];
	memset(b,-1,sizeof(b));
	char s[15];
	scanf("%s",s);
	for(int i=0;i<11;i++)
	{
		int flag=1;
		a[i]=s[i]-48;
		for(int j=0;j<11;j++)
		{
			if(b[j]==a[i])
				flag=0;		
		}
		if(flag)
			b[i]=a[i];
		
	}
	sort(b,b+11,greater<int>());
	
	
	
	printf("int[] arr = new int[]{");
	printf("%d",b[0]);
	for(int i=1;i<11;i++)
	{
		if(b[i]>=0)
			printf(",%d",b[i]);
	}
	printf("};\nint[] index = new int[]{");//up all yes
	int fa=1;
	for(int i=0;i<11;i++)
	{
		for(int j=0;j<11;j++)
		{
			if(b[j]==a[i])
			{
				if(fa)
				{
					printf("%d",j);
					fa=0;
				}
				else
					printf(",%d",j);
						
			}
				
		}
	}
	printf("};\n");
}



