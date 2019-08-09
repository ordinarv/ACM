#include<stdio.h>

int A[105],n;
int LIS()
{
    int* d = new int[n];
    int len = 1;
    int i,j;
    for(i=0;i<n;i++)
    {
        d[i]=1;
        for(j=0;j<i;j++)
        {
            if(A[j]<=A[i] && (d[j]+1)>=d[i])
                d[i]=d[j]+1;
        }
        if(d[i]>len) len=d[i];
    }
    delete []d;
    return len;
}
int main(void)
{
	scanf("%d",&n);
	for(int i=0;i<n;i++)
		scanf("%d",&A[i]);
	printf("%d",LIS());
	if(LIS()>=30)	printf("yes\n");
	else printf("no\n");
		
	return 0;
}
