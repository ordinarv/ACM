#include<cstdio>
const int INF=0x3f3f3f3f;
int a[5010];
int main()
{
    int n,i,j,ans;
    while(scanf("%d",&n)!=EOF)
    {
        ans=INF;
        for(i=0;i<n;i++) 
			scanf("%d",&a[i]);
       int cnt=0;
       for(i=0;i<n;i++)
           for(j=i+1;j<n;j++)
           {
               if(a[i]>a[j]) cnt++;
           }
       // printf("cnt=%d\n",cnt);
       if(ans>cnt)  ans=cnt;
       for(i=0;i<n;i++)
       {
           cnt=cnt-a[i]+n-1-a[i];
           if(ans>cnt)  ans=cnt;
        }
       printf("%d\n",ans);
    }
    return 0;
}

