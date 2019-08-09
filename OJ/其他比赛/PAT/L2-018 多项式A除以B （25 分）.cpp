//本题难点在于多项式除法的运算规则，运算法则详情百度
#include<bits/stdc++.h>
using namespace std;
double a[10005],b[10005];//每个数组保存一个多项式
int main () {
	map<int,double> op;//记录结果
	int n;
	cin>>n;
	int m;
	int maxn1=0,maxn2=0;//maxn1保存多项式A的最大的指数，maxn2保存多项式B的最大的指数。
	double l;
	for(int i=0; i<n; ++i) {
		scanf("%d %lf",&m,&l);
		a[m]=l;
		if(m>maxn1) maxn1=m;
	}
	int n1;
	cin>>n1;
	for(int i=0; i<n1; ++i) {
		scanf("%d %lf",&m,&l);
		b[m]=l;
		if(m>maxn2) maxn2=m;
	}
	for(int i=maxn1; i>=0; --i) { //根据运算法则计算结果
		if(i<maxn2) break;//被除项最大指数小于除项最大指数结束运算
		if(a[i]) {
			op[i-maxn2]=a[i]/b[maxn2];
			for(int j=maxn2; j>=0; --j) {
				a[i-maxn2+j]-=op[i-maxn2]*b[j];//得到新的被除式
			}
		}
	}
	//计算过后，op中保存的是商，数组a中保存的是余
	int cnt=0;
	for(auto i=op.begin(); i!=op.end(); ++i) {
		if(fabs(i->second)<0.05) op.erase(i);//小于0.05的数被当作0来看，所以要舍去。
	}
	printf("%d ",op.size());
	if(op.size()==0) printf("0 0.0");
	for(auto i=op.rbegin(); i!=op.rend(); ++i) {
		if(cnt) printf(" ");
		printf("%d %.1lf",i->first,i->second);
		cnt++;
	}
	printf("\n");
	int flag=0;
	for(int i=maxn2-1; i>=0; i--) {
		if(fabs(a[i])>=0.05) {
			flag++;
		}
	}
	cnt=0;
	printf("%d ",flag);
	if(!flag) printf("0 0.0");
	else {
		for(int i=maxn2-1; i>=0; --i) {
			if(fabs(a[i])>=0.05) {
				if(cnt) printf(" ");
				printf("%d %.1lf",i,a[i]);
				cnt++;
			}
		}
	}
}

