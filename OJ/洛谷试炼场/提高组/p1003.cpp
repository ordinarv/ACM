#include<iostream>
#include<cstring>
using namespace std; 
int a[100010][100010];
int main()
{
	int n,xa,ya,ans,b,c,g,k;
	cin>>n;
	memset(a,0,sizeof(a));
	for(int id=1;id<=n;id++)
	{
		cin>>b>>c>>g>>k;
		for(int j=c,j1=0;j1<k;j++,j1++)
		{
			for(int i=b,i1=0;i1<g;i++,i1++)
			{
				a[j][i]=id;
			}			
		}					
	}
	cin>>xa>>ya;
	ans=a[ya][xa];
	if(ans==0) cout<<-1<<endl;
	else cout<<ans<<endl;
	
	return 0;
}


