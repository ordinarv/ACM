#include<iostream>
#include<cstring >
using namespace std;
int main() {
	char a[1010],b[1010];
	while(cin>>a) {
		if(a[0]=='#') break;
		cin>>b;
		int j,k,lena=strlen(a),lenb=strlen(b),ans=0;
		for(int i=0; i<lena; i++) {
			if(a[i]==b[0]) {
				int flag=1;
				for(j=0,k=i; j<lenb; j++,k++) {
					if(a[k]!=b[j])
						flag=0;
				}
				if(flag) {
					i=k-1;
					ans++;
				}
			}
		}
		cout<<ans<<endl;
	}
	return 0;
}
