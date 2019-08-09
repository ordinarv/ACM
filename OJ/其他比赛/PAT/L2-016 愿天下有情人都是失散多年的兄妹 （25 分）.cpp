#include<bits/stdc++.h>
using namespace std;
typedef struct {
	int father;//父亲编号
	int mother;//母亲编号
	char c;//本人性别
} ff;
ff f[100005];
void init() { //初始化所有父母编号全为0；
	for(int i=1; i!=100005; ++i) {
		f[i].father = f[i].mother=0;//
	}
}
void insertT(int o,set<int> &p,int cnt) {
	if(cnt>5||o==0) return;//超出5代或者本人不存在，直接退出本次函数
	p.insert(o);
	insertT(f[o].father,p,cnt+1);
	insertT(f[o].mother,p,cnt+1);
}
int main() {
	init();
	int n;
	cin>>n;
	int o,op,l;
	char cc;
	for(int i=0; i!=n; ++i) {
		scanf("%d %c %d %d",&o,&cc,&op,&l);
		f[o].c=cc;
		if(op!=-1) {
			f[o].father=op;
			f[op].c='M';
		}
		if(l!=-1) {
			f[o].mother=l;
			f[l].c='F';
		}
	}
	int m;
	int high;
	cin>>m;
	for(int i=0; i!=m; ++i) {
		set<int> u,v;
		int flag=1;
		scanf("%d %d",&o,&op);
		if(f[o].c==f[op].c) printf("Never Mind\n");
		else {
			insertT(o,u,1);//前者的5代人都在集合u中；
			insertT(op,v,1);//后者的5代人都在集合v中；
			for(auto i=u.begin(); i!=u.end(); ++i) {
				if(v.count(*i)) {
					printf("No\n");//若在v中存在u中任意一个元素，两人是兄妹
					flag = 0;
					break;
				}
			}
			if(flag) printf("Yes\n");
		}
	}
	return 0;
}

