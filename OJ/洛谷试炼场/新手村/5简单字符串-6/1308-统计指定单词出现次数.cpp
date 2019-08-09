#include<iostream>
#include<cstring>
#include<cctype>
#include<cstdio>
using namespace std;
char s[1000010];
int main() {
	char tr[15];
	cin>>tr;
	getchar();
	gets(s);
	int len=strlen(s),lent=strlen(tr),res=-1,ans=0;
	for(int i=0; i<lent; i++)
		if(islower(tr[i])) tr[i]-=32;
	for(int i=0; i<len; i++) {
		if(islower(s[i])) s[i]-=32;
	}//all change big.
	for(int i=0; i<len; i++) {
		int flag=1;
		if((i==0||s[i-1]==' ')&&s[i]==tr[0]&&(s[i+lent]==' '||i+lent==len)) {
			for(int j=i+1,k=1; k<lent; j++,k++) {
				if(s[j]!=tr[k]) {
					flag=0;
					break;
				}
			}
			if(flag) {
				ans++;
				if(res==-1) {
					res=i;
				}


			}
		}
	}
	if(ans) cout<<ans<<" "<<res<<endl;
	else cout<<-1<<endl;
	return 0;
}
