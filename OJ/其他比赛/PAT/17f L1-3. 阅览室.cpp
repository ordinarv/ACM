#include <bist/stdc++.h>

using namespace std;
const int M = 1111;
const int inf = -1;
int book[M];
char st[M];
int main() {
	int n;
	scanf("%d",&n);
	for(int i=0; i<n; i++) {

		memset(book,inf,sizeof(book));   //不能初始化为0
		int id;
		int sum=0,cnt=0,h,m;

		while(scanf("%d",&id)) {

			scanf("%s",st);
			scanf("%d:%d",&h,&m);

			if(id==0) {
				printf("%d ",cnt);
				if(cnt==0) printf("0");
				else printf("%d\n",(int)(1.0*sum/cnt+0.5));
				cnt=0;
				sum=0;
				memset(book,inf,sizeof(book));
				break;

			}
			int  t=h*60+m;
			if(st[0]=='S') {    //错误代码： if(st[0]=='S'&&book[id]==inf)
				book[id]=t;
			}
			if(st[0]=='E'&&book[id]!=inf) {
				sum+=t-book[id];
				book[id]=inf;
				cnt++;
			}
		}
	}
	return 0;
}
