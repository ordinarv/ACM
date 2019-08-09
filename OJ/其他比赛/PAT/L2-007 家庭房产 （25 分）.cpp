#include<bits/stdc++.h>
using namespace std;
const int maxn=11000;
int vis[maxn],m[maxn];//vis保存那些人被记录过
int p[10010];
struct node {
	double ans1,ans2;//ans1为房产套数，ans2为房产面积
	int id,num;
};
bool cmp(node a,node b) { //根据题目写出的排序规则
	if(a.ans2!=b.ans2)
		return a.ans2>b.ans2;//按人均面积降序输出
	return a.id<b.id;//并列时按成员编号升序输出
}

void init() { //并查集初始化
	for(int i=0; i<=10000; i++)
		p[i]=i;
}
int find(int x) { //并查集查找始祖的编号
	if(x==p[x])
		return x;
	else
		return p[x]=find(p[x]);
}
void un(int a,int b) { //并查集合并函数
	int x=find(a);
	int y=find(b);
	if(x!=y) {
		if(x>y)//并到编号小的人
			p[x]=y;
		else
			p[y]=x;//并到编号小的人
	}
}
int main() {
	int i,j,n;
	node a[10005];
	node b[10005];
	node mul[10005];
	cin>>n;
	init();
	for(i=0; i<n; i++) {
		int p1,p2,d,k;
		cin>>a[i].id>>p1>>p2;
		vis[a[i].id]=1;
		if(p1!=-1) {
			un(p1,a[i].id);
			vis[p1]=1;
		}
		if(p2!=-1) {
			un(p2,a[i].id);
			vis[p2]=1;
		}
		cin>>k;
		while(k--) {
			cin>>d;
			if(d!=-1) {
				un(a[i].id,d);
				vis[d]=1;
			}
		}
		cin>>a[i].ans1>>a[i].ans2;
	}
	for(i=0; i<n; i++) {
		int id=find(a[i].id);
		mul[id].id=id;
		mul[id].ans1+=a[i].ans1;
		mul[id].ans2+=a[i].ans2;
	}
	for(i=0; i<10000; i++)
		if(vis[i]) {
			mul[find(i)].num++;
		}
	int cnt=0;
	for(i=0; i<10000; i++) {
		if(vis[i]) {
			int id=find(i);
			if(!m[id]) {
				m[id]=1;
				double x=double(mul[id].num);
				b[cnt].ans1=mul[id].ans1*1.0/x;
				b[cnt].ans2=mul[id].ans2*1.0/x;
				b[cnt].id=id;
				b[cnt++].num=int(x);
			}
		}
	}
	cout<<cnt<<endl;
	sort(b,b+cnt,cmp);
	for(i=0; i<cnt; i++)
		printf("%04d %d %.3lf %.3lf\n",b[i].id,b[i].num,b[i].ans1,b[i].ans2);
	return 0;
}

