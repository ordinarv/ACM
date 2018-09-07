#include<iostream>

using namespace std;
int main()
{
	int a,b;
	while(cin>>a>>b&&(a||b))
	{
		int ans[100],cnt=0;
		for(int i=0;i<=99;i++)
		{
			if((a*100+i)%b==0)
				ans[cnt++]=i;	
		}
		printf("%02d",ans[0]);
		for(int i=1;i<cnt;i++)
			printf(" %02d",ans[i]);
		cout<<endl;
	}	
	return 0;
}
