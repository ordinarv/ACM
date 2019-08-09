#include<bits/stdc++.h>

using namespace std;
int main()
{
	int s,m,t,from,to;
	while(scanf("%d%d%d%d%d",&t,&m,&s,&from,&to)!=EOF)
	{
		t*=5;
		from*=5;
		to*=5;
		int flag=1;
		for(int i=from; i<=to; i++)//ÕýÐò
		{
			if(i>60) i=1;
			if(i==t||i==m||i==s)
			{
				flag=0;
				break;
			}
		}
		if(flag==0)   	//µ¹Ðò
		{
			for(int i=from; i>=to; i--)
			{
				if(i==t||i==m||i==s)
				{
					flag=0;
					break;
				}
			}
		}
		if(flag) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}

	return 0;
}
