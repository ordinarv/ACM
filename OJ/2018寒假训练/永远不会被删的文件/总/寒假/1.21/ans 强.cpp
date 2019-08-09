#include <stdio.h>

int main()
{
    int n,m,weapon[1000][1000],count,num;
	double f[1000]={0},ch;
    while(scanf("%d%d",&n,&m)!=EOF)
    {
        for(int i=1;i<=n;i++)
        {
            scanf("%d",&weapon[i][1]);
            scanf("%d",&weapon[i][2]);
            for(int j=3;j<=(weapon[i][2]+2);j++)
                scanf("%d",&weapon[i][j]);
        }
        for(int i=1;i<=m;i++)
        {
            scanf("%d%lf",&num,&ch);
            if(f[num]<ch) f[num]=ch;
        }//
        double max=0;
        for(int i=1;i<=n;i++)
        {
            double now=1;
            for(int j=1;j<=weapon[i][2];j++)
            {
                now+=f[weapon[i][j+2]];
            }
            now*=weapon[i][1];
            if(now>max) max=now;
        }
        printf("%.4lf\n",max);
    }
    return 0;
}
