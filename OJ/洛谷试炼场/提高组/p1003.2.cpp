#include<iostream>

using namespace std;
int main()
{
	int a[100010],b[100010],g[100010],k[100010];
	int n,x,y,a1,b1,g1,k1,ans=-1;
	cin>>n;
	for(int i=1;i<=n;i++)
		cin>>a[i]>>b[i]>>g[i]>>k[i];
	cin>>x>>y;
	for(int i=1;i<=n;i++)
	{
		a1=a[i],b1=b[i],g1=a1+g[i],k1=b1+k[i];
		if(a1<=x&&b1<=y&&g1>=x&&y<=k1) ans=i;				
	}
	cout<<ans<<endl;
	
	
	
	return 0;
}




