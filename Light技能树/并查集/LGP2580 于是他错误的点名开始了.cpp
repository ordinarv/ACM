#include<bits/stdc++.h>
using namespace std;

const int maxn = 400005;
char s[55];
int trie[maxn][26],vis[maxn],tot;

void insert(){
	int len = strlen(s),root=0,id;
	for(int i=0;i<len;i++){
		id = s[i]-'a';
		if(trie[root][id]==0) trie[root][id] = ++tot;
		root = trie[root][id];
	}
	vis[root]=1;
}
int search(){
	int len = strlen(s),root=0,id;
	for(int i=0;i<len;i++){
		id = s[i]-'a';
		if(trie[root][id]==0) return 0;
		root = trie[root][id];
	}
	vis[root]++;
	return vis[root]-1;
}
int main(){
	int n,m;
	scanf("%d",&n);
	while(n--){
		scanf("%s",s);
		insert();
	}
	scanf("%d",&m);
	while(m--){
		scanf("%s",s);
		int f = search();
		if(f==0) printf("WRONG\n");
		else if(f==1) printf("OK\n");
		else printf("REPEAT\n");
	}
	return 0;
}
