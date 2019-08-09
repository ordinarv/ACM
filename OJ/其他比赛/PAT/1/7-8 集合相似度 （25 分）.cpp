#include<bits/stdc++.h>
using namespace std;
set<int> st[55];
int main(){
	int n,m,k,x,y;
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		scanf("%d",&m);
		for(int j=0;j<m;j++){
			scanf("%d",&x);
			st[i].insert(x);
		}
	}
	cin>>k;
	double ans = 0;
	for(int i=0;i<k;i++){
		scanf("%d%d",&x,&y);
		ans = 0;int up = 0,back = 0;
		if(st[x].size() >= st[y].size()){		
			for(set<int>::iterator it=st[y].begin();it!=st[y].end();++it)//±éÀúyµÄÔªËØ 
				if(st[x].count(*it) == 1) up++;
			
		}
		else {
			for(set<int>::iterator it=st[x].begin();it!=st[x].end();++it)
				if(st[y].count(*it) ==  1) up++;
		}
		ans = up*1.0/(st[x].size() + st[y].size() - up);
		printf("%.2lf%\n",ans*100);
	}
	
	return 0;
}
