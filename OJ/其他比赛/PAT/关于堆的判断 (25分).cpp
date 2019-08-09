#include <bits/stdc++.h>
using namespace std;
const int MAXN=1005;
const int inf=1e9;
int n,m,k;
int a[MAXN];
string s;


int find_pos(int x) {
	for(int i=1; i<=n; ++i) {
		if(a[i]==x)return i;
	}
	return -1;
}
int main() {
	scanf("%d%d",&n,&m);
	for(int i=1; i<=n; ++i) {
		scanf("%d",&a[i]);
		int k=i;
		while(k>1&&a[k]<a[k/2]) {
			swap(a[k],a[k/2]);
			k=k/2;
		}
	}
	int x1,x2;
	while(m--) {
		scanf("%d",&x1);
		cin>>s;
		if(s=="and") {
			scanf("%d",&x2);
			cin>>s;
			cin>>s;
			if(find_pos(x1)/2==find_pos(x2)/2)puts("T");
			else puts("F");
		} else {
			cin>>s;
			if(s=="a") {
				cin>>s;
				cin>>s;
				scanf("%d",&x2);
				int pos1=find_pos(x1);
				int pos2=find_pos(x2);
				if(pos1/2==pos2)puts("T");
				else puts("F");
			} else {
				cin>>s;
				if(s=="root") {
					if(a[1]==x1)puts("T");
					else puts("F");
				} else {
					cin>>s;
					scanf("%d",&x2);
					int pos1=find_pos(x1);
					int pos2=find_pos(x2);
					if(pos2/2==pos1)puts("T");
					else puts("F");
				}
			}
		}
	}

	return 0;
}

