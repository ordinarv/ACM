#include<iostream>
#include<cstring>
using namespace std;
int len;
char s[110],a[]="Danil",b[]="Olya",c[]="Slava",d[]="Ann",e[]="Nikita";
bool slove() {
	int cnt=0;
	for(int n=0; n<len; n++) {

		if(s[n]=='D') {
			for(int i=0,j=n; i<strlen(a); j++,i++) {
				if(s[j]!=a[i]) break;
				if(i==strlen(a)-1)cnt++;
			}
		} else if(s[n]=='O') {
			for(int i=0,j=n; i<strlen(b); j++,i++) {
				if(s[j]!=b[i]) break;
				if(i==strlen(b)-1) cnt++;
			}
		} else if(s[n]=='S') {
			for(int i=0,j=n; i<strlen(c); j++,i++) {
				if(s[j]!=c[i]) break;
				if(i==strlen(c)-1)cnt++;
			}
		} else if(s[n]=='A') {
			for(int i=0,j=n; i<strlen(d); j++,i++) {
				if(s[j]!=d[i]) break;
				if(i==strlen(d)-1)cnt++;
			}
		} else if(s[n]=='N') {
			for(int i=0,j=n; i<strlen(e); j++,i++) {
				if(s[j]!=e[i]) break;
				if(i==strlen(e)-1)cnt++;
			}
		}
		if(cnt==1)return true;
		else return false;
	}
}
int main() {

	while(cin>>s) {
		len=strlen(s);
		if(slove()) cout<<"YES"<<endl;
		else      cout<<"NO"<<endl;
	}
}




