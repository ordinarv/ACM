#include<stdio.h>
#include<string.h>
using namespace std;
typedef long long ll;
const int maxn = 1e2+5;

int check(char ch) {
	if( (ch>='0' && ch<='9') || (ch=='.') )
		return 1;
	return 0;

}
int main() {
	char ans[maxn], a='\0', b='\0';
	int pos=0;
	gets(ans);
	int len = strlen(ans);
	while(pos<len) {
		if( b=='\0' ) printf("%c", ans[pos]);
		 else {
			if( check(ans[pos]) ) {
				if(check(b)) printf("%c", ans[pos]);
				else {
					if( (a=='(' || a=='\0') && (b=='-' || b=='+') )
						printf("%c", ans[pos]);
					else
						printf("\n%c", ans[pos]);
				}
			} else 
				printf("\n%c", ans[pos]);
			
		}
		a = b;
		b = ans[pos];
		pos++;
	}
	return 0;
}


