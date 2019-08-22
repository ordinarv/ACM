#include<bits/stdc++.h>
using namespace std;

const int maxn = 400005;
int trie[maxn][26],len,root,tot,sum[maxn];
bool p;
char s[11];
void insert(){
	len = strlen(s);
	root = 0;
	for(int i=0;i<len;i++){
		int id = s[i]-'a';
		if(trie[root][id]==0) trie[root][id] = ++tot;
		sum[trie[root][id]]++;
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
	return sum[root];
}
int main(){
	while(gets(s)){		
		if(strlen(s)==0) break;
		insert();
	}
	while(cin>>s){
		cout<<search()<<endl;
	}
	
	return 0;
}
