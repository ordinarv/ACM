#include <bits/stdc++.h>
using namespace std;

typedef int ElementType;
typedef struct TNode* BTree;
struct TNode {
	ElementType Data;
	BTree Left;
	BTree Right;
};
int n,a[31],b[31];
void Init() {
	for(int i=0; i<n; i++) {
		cin>>a[i];
	}
	for(int i=0; i<n; i++) {
		cin>>b[i];
	}
}
BTree buildTree(int *a,int *b,int m) {
	BTree t=(BTree)malloc(sizeof(TNode));
	int i;
	if(m==0)return NULL;
	for(i=0; i<m; i++) {
		if(b[i]==a[m-1])break;
	}
	t->Left=buildTree(a,b,i);
	t->Right=buildTree(a+i,b+i+1,m-i-1);
	t->Data=a[m-1];
	return t;
}
BTree printTree(BTree root) {
	if(root) {
		cout<<" "<<root->Data;
		if(root->Left)printTree(root->Left);
		if(root->Right)printTree(root->Right);
	}
}
int main() {
	cin>>n;
	Init();
	BTree s=buildTree(a,b,n);
	cout<<"Preorder:";
	printTree(s);
}

