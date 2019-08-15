/*
单调队列 
*/
#include<cstdio>
#include<cstring>
using namespace std;
const int maxn = 1e6+5;
struct node{
	int v,p;
}q[maxn];
int a[maxn],mx[maxn],mn[maxn];
int n,m;
void gmax(){
	//memset(q,0,sizeof(q));
	int i,front =1,back = 0;
	for(i=1;i<m;i++){
		while(front<=back && q[back].v<=a[i]) back--;//维护单调性 每次插入都看一下
		q[++back].v = a[i];
		q[back].p = i;
	}
	for(;i<=n;i++){	
		while(front<=back && q[back].v<=a[i]) back--;
		q[++back].v = a[i];q[back].p = i;
		while(q[front].p < i-m+1) front++; 
		mx[i-m+1] = q[front].v;		
	}
}
void gmin(){
	
	int i,front =1,back = 0;
	for(i=1;i<m;i++){
		while(front<=back && q[back].v>=a[i]) back--; 
		q[++back].v = a[i];
		q[back].p = i;
	}
	for(;i<=n;i++){	
		while(front<=back && q[back].v>=a[i]) back--;
		q[++back].v = a[i];q[back].p = i;
		while(q[front].p < i-m+1) front++; 
		mn[i-m+1] = q[front].v;		
	}
}

int main(){
	scanf("%d%d",&n,&m);
	for(int i=1;i<=n;i++) scanf("%d",&a[i]);
	gmin();
	gmax();

	for(int i=1;i<n-m+1;i++) printf("%d ",mn[i]); printf("%d\n",mn[n-m+1]);
	for(int i=1;i<n-m+1;i++) printf("%d ",mx[i]); printf("%d\n",mx[n-m+1]);
	
	return 0;
}
