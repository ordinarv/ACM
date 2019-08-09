#include<stdio.h>
/*long long ar[10000000]= {0};//记忆化递归，但却吃数组大小。 
long long pow(int a,int b)//a的b次方 digui;
{
	if(ar[b]>0)
		return ar[b];
	else
	{
		if(b==1)
			return ar[b]=a;
		else
		{
			if(b%2==0)
				return ar[b]=pow(a,b/2)*pow(a,b/2);
			else
				return ar[b]=pow(a,(b-1)/2)*pow(a,(b-1)/2)*pow(a,1);

		}
	}
}
int pow(int a,int n)//返回值是a的n次方,论坛上的 
{
    int result=1;
    while(n!=0)
    {
        if(n%2==1)//如果n是奇数
            result=result*a;//就要多乘一次
        a=a*a;
        n=n/2;//二分
    }
    return result;
}



int ans=1,a;
for(int i=0;i<n;i++)
{
	ans=ans*a;


}







int fi(int n)//递归，斐波那契数列模型 
{
	if(n==1||n==2)
		return 1;
	else
		return fi(n-1)+fi(n-2);

}
int pow(int a,int b)//正常版 
{
		if(b==1)
			return a;
		else
		{
			if(b%2==0)
				return pow(a,b/2)*pow(a,b/2);
			else
				return pow(a,(b-1)/2)*pow(a,(b-1)/2)*pow(a,1);
		}
}
long long pow(int a,int b)//改为long long扩大数据规模 
{
		if(b==1)
			return a;
		else
		{
			if(b%2==0)
				return pow(a,b/2)*pow(a,b/2);
			else
				return pow(a,(b-1)/2)*pow(a,(b-1)/2)*pow(a,1);
		}
}
*/


	
int main(void)
{
	int x,y,t;
	while(scanf("%d%d",&x,&y)!=EOF)
	{
			
	printf("%lld",pow(x,y));
	}
	return 0;
}
