#include<iostream>

using namespace std;
int main()
{
	int n,m,a[55][10];	
	while(cin>>n>>m)
	{
		double sum_c[55]={0},sum_b[10]={0};
		for(int i = 1; i <= n; i++)
			for(int j = 1; j <= m; j++)
			{
				cin>>a[i][j];
				sum_c[i]+=a[i][j];
			}
		for(int i=1; i<n; i++)
			printf("%.2lf ",sum_c[i]/m);
		printf("%.2lf\n",sum_c[n]/m);
		int flag1=1;
		for(int i=1; i<=m; i++)
		{
			for(int j=1; j<=n; j++)
			{
				sum_b[i]+=a[j][i];
			}
			if(i==m)
				printf("%.2lf\n",sum_b[i]/n);
			else
				printf("%.2lf ",sum_b[i]/n);
		}
		int cnt=0;
		for(int i=1; i<=n; i++)
		{
			int flag=1;
			for(int j = 1; j <= m; j++)
			{
				if(a[i][j]<(sum_b[j]/n))
				{
					flag=0;
					break;
				}
			}
			if(flag)
				cnt++;
		}
		cout<<cnt<<endl<<endl;
	}
	return 0;
}
