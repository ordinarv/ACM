int factorial(int x,int ans)
{
    if(x==1)
       return  ans;
    factorial(x-1,ans*x);
}




