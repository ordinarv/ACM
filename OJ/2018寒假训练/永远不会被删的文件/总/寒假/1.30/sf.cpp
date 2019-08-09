#include<stdio.h>
#include<iostream>
#include<string.h>
using namespace std;
int main(void)
{
	char s[20],s1[20];
	//while(scanf("%s%s"))
	cin>>s>>s1;
	
	int len=strlen(s),len1=strlen(s1);
	int a=0,a1=0;
	int flag=0,flag1=0;
	for(int i=0;i<len;i++)
	{
		if(s[i]>=48&&s[i]<=57)
		{
			a+=(s[i]-48);
			a*=10;
		}
		else
		{
			flag=1;
			break;
		}		
	}
	for(int i=0;i<len1;i++)
	{
		if(s1[i]>=48&&s1[i]<=57)
		{
			a1+=(s1[i]-48);
			a1*=10;
		}
		else
		{
			flag1=1;
			break;
		}		
	}
	if(flag==0&&flag1==0)
		printf("%d + %d = %d\n",a/10,a1/10,a/10+a1/10);
	else if(flag==1&&flag1==0)	
		printf("? + %d = ?\n",a1/10);	
	else if(flag==0&&flag1==1)
		printf("%d + ? = ?\n",a/10)	;
	else
		printf("? + ? = ?\n");
	return 0;
}

