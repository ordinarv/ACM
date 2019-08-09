#include<bits/stdc++.h>
using namespace std;
const int MAXN = 100000;
int s1[MAXN], s2[MAXN], s3[MAXN];
int n;
void f(int p1,int p2,int q1,int q2,int index) { //根据后序和中序构造出树
	if(p1>p2 || q1>q2) return ;
	int i = p1 ;
	while(s1[i] != s2[q2]) i++;
	s3[index] = s1[i];
	f(p1, i-1, q1, q1+i-1-p1, 2*index+1);
	f(i+1, p2, q1+i-p1, q2-1, 2*index+2);
}
int main() {
	scanf("%d",&n);
	for(int i=0; i!=n; i++) {
		scanf("%d",&s2[i]);
	}
	for(int i=0; i!=n; i++) {
		scanf("%d",&s1[i]);
	}
	f(0,n-1,0,n-1,0);
	int cnt = 0;
	for(int i=0; i<=100000; i++) {
		if(cnt==n) break;
		if(s3[i]) {
			cnt++;
			if(i) printf(" ");
			printf("%d",s3[i]);
		}
	}
	return 0;
}

