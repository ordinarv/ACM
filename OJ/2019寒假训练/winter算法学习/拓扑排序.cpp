#include<iostream>
#include<cstdio>
#include<cstring>
#include<stack>
#include<queue>
using namespace std;
const int N=550;

int n,m,cnt,head[N],in[N],ans[N];
struct edge{
	int d,id,Next;
}e[N];

int init(){
	memset(head,-1,sizeof(head));
	memset(in,0,sizeof(in));
	cnt=0;
}

int add(int x,int y,int d){
	e[cnt].d=d;
	e[cnt].id=y;
	e[cnt].Next=head[x];
	head[x]=cnt++;
}

int main(){
	while(~scanf("%d%d",&n,&m)){
		init();
		priority_queue<int,vector<int>,greater<int> >q;
		while(m--){
			int u,v;
			scanf("%d%d",&u,&v);
			add(u,v,0);
			in[v]++;
		}
		for(int i=1;i<=n;i++)
			if(!in[i]) q.push(i);
		int k=0;
		while(q.size()){
			int x=q.top();
			q.pop();
			ans[++k]=x;
			for(int i=head[x];i!=-1;i=e[i].Next){
				int y=e[i].id;
				in[y]--;
				if(in[y]<=0) q.push(y);
			}
		}
		for(int i=1;i<=k;i++)
			printf("%d%s",ans[i],i==k?"\n":" ");
	}
	return 0;
} 

