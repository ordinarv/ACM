#include<iostream>

#include<cstring>
using namespace std;
void slove(char x[]) {
	int res=0,len=strlen(x);
	for(int i=0; i<len; i++) {
		if(x[i]=='.') {
			res=1;
			break;
		}
	}
	if(res) {
		int i;
		for(i=len-1;i>=0;i--) {
			if(x[i]=='0') {
				x[i]='\0';
				len--;
			}
			else  break;
		}
		if(x[i]=='.') x[i]='\0';
	}
}
int main() {
	char a[1000000],b[1000000];
	while(cin>>a>>b) {
		slove(a);
		slove(b);
		cout<<(!strcmp(a,b)?"YES":"NO")<<endl;
	}

	return 0;
}
