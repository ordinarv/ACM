

int gcd(int x,int y)//µÝ¹é 
{
	return y?gcd(y,x%y):x;
}
int  Gcd(int x,int y)//Ñ­»· 
{
    while(y)
    {
        int temp=x;
        x=y;
        y=temp%y;
    }
    return x;
}
typedef  
lcm=r/gcd(r,n)*n;


