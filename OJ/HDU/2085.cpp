#include<iostream>

using namespace std;
int main()
{
	long long f[40],g[40];
	f[0]=1;
	g[0]=0;
	for(int i=1; i<=33; i++)
	{
		f[i]=3*f[i-1]+2*g[i-1];
		g[i]=f[i-1]+g[i-1];
	}
	int n;
	while(cin>>n)
	{
		if(n==-1) break;
		cout<<f[n]<<", "<<g[n]<<endl;
	}
	return 0;
}


