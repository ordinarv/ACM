#include<bits/stdc++.h>

using namespace std;

int magic(int n,int m)//move wei;
{
	int b=n,wei=0;
	while(b)
	{
		b=b/10;
		m*=10;
	}
	return (n+m);
}
/*int maxs(int x)
{
	int b=x,s;
	while(b)
	{
		s=b%10;
		b=b/10;
	}
	return s;
}*/
int ans,a[510];
void ss(int k,int j)
{
	ans++;
	//int x=maxs(k);//zui gao wei;
	for(int i=1; i<=j/2; i++)
	{
		ss(magic(k,i),i);
	}

}
void db()
{
	for(int t=1;t<=500;t++)
	{
		ans=0;
		for(int i=1; i<=t/2; i++)
		{			
			ss(magic(t,i),i);
		}
		a[t]=ans;
	}
}
int main()
{
	int r;
	db();
	while(scanf("%d",&r)!=EOF)
	{
		
		
		cout<<a[r]<<endl;
	}

	return 0;
}

