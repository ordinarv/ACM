#include<stdio.h>
#include<string.h>

int main()
{
	int n;
	char s[10010],q;
	scanf("%d",&n);
	scanf(" %c",&q);
	getchar();
	gets(s);
	int len=strlen(s);
	int a=n-len;
	if(a<0)
		printf("cut\n");
	else
	{
		while(a--)
		{
			printf("%c",q);
		}
		printf("%s\n",s);
	}
	return 0;
}


