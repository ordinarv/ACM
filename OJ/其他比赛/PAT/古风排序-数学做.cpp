#include <stdio.h>
#include <string.h>
int main() {
	int n;
	scanf("%d",&n);
	getchar();
	char str[1001];
	gets(str);

	int k;
	if(strlen(str)%n==0) {
		k=strlen(str)/n;
	} else {
		k=strlen(str)/n+1;
	}
	for(int i=0; i<n; i++) {
		for(int j=i+(k-1)*n; j>=0; j-=n) {
			if(j<strlen(str))
				printf("%c",str[j]);
			else
				printf(" ");
		}
		printf("\n");
	}

	return 0;
}


