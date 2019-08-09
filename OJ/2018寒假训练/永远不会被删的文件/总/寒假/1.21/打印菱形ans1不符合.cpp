#include<stdio.h>
int main(void) 
{
	int i,j,n,k,m;
	scanf("%d",&n);
	for (i=1; i<=n; i++) 
	{ //打印上半部分
		for(j=1; j<=n-i; j++) 
		{ //打印空格，个数递减
			printf(" ");
		}
		for(k=1; k<=2*i-1; k++) //打印* ，个数为2k-1
			printf("*");
		printf("\n");
	}

	for(i=1; i<=n-1; i++) { //打印下半部分
		for(j=1; j<=i; j++) { //打印空格
			printf(" ");
		}
		for (m=1; m<=2*(n-i)-1; m++) { //找一下几何关系即可得到2*（n-1）-1这个关系
			printf("*");
		}
		printf("\n");
	}
}
