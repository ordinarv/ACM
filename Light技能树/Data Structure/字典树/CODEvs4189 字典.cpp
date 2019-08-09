#include<bits/stdc++.h>
using namespace std;

const int maxn = 400005;
int trie[maxn][26],len,root,tot,vis[maxn];
bool p;
char s[11];
void insert(){
	len = strlen(s);
	root = 0;
	for(int i=0;i<len;i++){
		int id = s[i]-'a';
		if(trie[root][id]==0) trie[root][id] = ++tot;
		vis[trie[root][id]]=1;
		root = trie[root][id]; 
	}
}
int search(){
	root = 0;
	len = strlen(s);
	for(int i=0;i<len;i++){
		int id = s[i]-'a';
		if(trie[root][id]==0) return 0;
		root = trie[root][id];
	}
	return vis[root];
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
		printf("%s\n",search()==1?"YES":"NO");
	}
	
	return 0;
}
