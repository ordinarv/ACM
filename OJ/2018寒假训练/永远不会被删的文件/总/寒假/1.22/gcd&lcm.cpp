int gcd(int a,int b)//µÝ¹é 
{
	return b?gcd(b,a%b):a;
		
}

int gcd(int x,int y)
{
	return y?gcd(y,x%y):x;
}

a,b
while(b)//µü´ú
{
	int r=b;
	b=a%b;
	a=r;	
}
printf("%d",a);
lcm=a/gcd(a,b)*b;
