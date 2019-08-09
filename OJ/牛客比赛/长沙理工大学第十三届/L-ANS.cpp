#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int t,a,b,n,x;
    cin>>t;
    while(t--)
    {
        int num=0,cnt=0;
        cin>>a>>b>>n;
        for(int i=0;i<n;i++)
        {
            cin>>x;
            num+=x/2,cnt+=x%2;
        }
        a=(b>=num)?a+b-num:a-2*(num-b);
        printf("%s\n",(a-cnt)<0?"No":"Yes");
    }
    return 0;
}
