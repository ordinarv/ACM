#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int n,m;
	while(cin>>n>>m&&n+m)
	{
		int a[110],b[110];
		for(int i=0; i<n; i++)
			cin>>a[i];
		for(int i=0; i<m; i++)
			cin>>b[i];
		for(int i=0; i<n; i++)
		{
			for(int j=0; j<m; j++)
			{
				if(a[i]==b[j])
					a[i]=-1;
			}
		}
		int flag=1;
		for(int i=0; i<n; i++)
		{
			if(a[i]==-1) continue;
			cout<<a[i]<<' ';
			flag=0;
		}
		if(flag)cout<<"NULL";
		cout<<endl;
	}



	return 0;
}

