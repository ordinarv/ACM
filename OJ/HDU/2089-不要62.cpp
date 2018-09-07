#include<iostream>
using namespace std;
int main()
{
	int n,m;
	while(cin>>n>>m&&(n||m))
	{
		int res=0;
		for(int i=n; i<=m; i++)
		{
			int cnt=0,x=i,a[10];
			a[0]=0;
			while(x)
			{
				a[++cnt]=x%10;
				if(a[cnt]==4)
				{
					res++; 
					break;
				}
				if(a[cnt]==6&&a[cnt-1]==2)
				{
					res++;
					break;
				}
				x/=10;
			}
		}
		cout<<m-n-res+1<<endl;
	}
	return 0;
}
