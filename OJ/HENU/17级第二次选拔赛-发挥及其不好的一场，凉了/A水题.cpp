#include<bits/stdc++.h>

using namespace std;
int main()
{
	char s[10010];
	while(cin>>s)
	{
		int len=strlen(s),ans[30]= {0};
		for(int i=0; i<len; i++) //all change big
		{
			if(s[i]>=97&&s[i]<=122)
				s[i]-=32;
		}
		for(int i=0; i<len; i++)
		{
			ans[s[i]-65]++;

		}
		sort(ans,ans+26,greater<int>());
		int res=0;
		
		for(int i=0,cnt=26; i<26; i++)
		{
			
			res+=(ans[i]*cnt);
			cnt--;
		}
		cout<<res<<endl;
	}
	return 0;
}
