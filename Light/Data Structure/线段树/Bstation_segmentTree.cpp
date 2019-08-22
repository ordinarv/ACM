#include<bits/stdc++.h>
using namespace std;

const int maxn = 1e5+5;
struct node {
	int left,right,val;
} node[maxn];
void BuildTree(int i,int left,int right) {
	node[i].left= left;
	node[i].right = right;
	node[i].val = 0;
	if(left == right) { //
		father[left] = i;
		return ;
	}
	BuildTree(i<<1,left,(right+left)/2);
	BuildTree((i<<1)+1,(right+left)/2+1,right);
}
void update(int ri) { // from down to up upd,
	if(ri == 1)return ;//	root=1;
	int fi = ri/2;
	int a = node[fi<<1].val;
	int b = node[(fi<<1)+1].val;
	node[fi].val = a>b?a:b;
	update(ri/2);//father
}

//query interal max;
int maxres = -1<<20;
void query(int i,int l,int r) {
	if(node[i].left == l && node[i].right == r) {
		maxres = maxres<node[i].val?node[i].val:maxres;
		return;
	}
	// not complete equal, find child of the tree
	i = i<<1; //get the left child imformnation
	if(l <= node[i].right){
		if(r <= node[i].right)  query(i,l,r);
		else query(i,l,node[i].right);
	}
	i++; //right child of the tree
	if(r >= node[i].left){
		if(l >= node[i].left) query(i,l,r);
		else query(i,node[i].left,r);
	}
	
}
int main() {

	return 0;
}
