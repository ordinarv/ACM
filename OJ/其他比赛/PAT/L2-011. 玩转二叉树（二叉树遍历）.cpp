#include <stdio.h>
#include <algorithm>
#include <string.h>
#include <queue>
#include <iostream>

using namespace std;

typedef long long ll;
const int N = 35;

int cnt, n;

typedef struct Tree {
	Tree *left;
	Tree *right;
	int val;
} Tree;

Tree *root;

Tree* creat(int *preorder, int *inorder, int n) { //前序、后序和子树长度
	Tree *tmp;
	for(int i = 0; i < n; i++) {
		if(preorder[0]==inorder[i]) { //在中序中找到这个根节点
			tmp = (Tree*)malloc(sizeof(Tree));
			tmp->val = inorder[i];
			tmp->left = creat(preorder+1, inorder, i);
			tmp->right = creat(preorder+i+1, inorder+i+1, n-(i+1));
			return tmp;
		}
	}
	return NULL;
}

void levelorder(Tree *cur) {
	cnt = 0;
	queue<Tree*>que;
	while(!que.empty()) que.pop();
	que.push(cur);
	Tree *node;
	while(!que.empty()) {
		node = que.front();
		que.pop();
		if(cnt == n-1) printf("%d\n", node->val);
		else {
			printf("%d ", node->val);
			cnt++;
		}
		if(node->right != NULL) que.push(node->right);
		if(node->left != NULL) que.push(node->left);
	}
}

int main() {
	//  freopen("in.txt", "r", stdin);
	int preorder[N], inorder[N];
	while(~scanf("%d", &n)) {
		for(int i = 0; i < n; i++)
			scanf("%d", &inorder[i]);
		for(int i = 0; i < n; i++)
			scanf("%d", &preorder[i]);
		root = creat(preorder, inorder, n);
		levelorder(root);
	}
}

