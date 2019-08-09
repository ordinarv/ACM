#include<bits/stdc++.h>
using namespace std;
int main() {
	multiset<int> op;//输入的活跃度可能相同，所以要使用multiset容器,而不能用set容器
	int n;
	cin>>n;
	int m=n;
	int ma=0,mi=0;
	int d;
	for(int i=0; i!=n; ++i) {
		scanf("%d",&d);
		op.insert(d);
	}
	int j;
	j=0;
	n%2==0?n=n:n=n+1;//判断n是否为偶数，如果n为偶数代表两种类型的人数是一样的，如果n是
	//奇数，则外向型的人数比内向型的人数多一
	for(auto i=op.begin(); j<m/2; ++i,++j) {
		ma+=*i;//前一半的人数，op为set容器，自动升序排列
	}
	j=0;
	for(auto i=op.rbegin(); j<n/2; ++j,++i) {
		mi+=*i;
	}
	printf("Outgoing #: %d\n",n/2);
	printf("Introverted #: %d\n",m/2);
	printf("Diff = %d",mi-ma);
}

