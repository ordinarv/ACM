//#pragma comment(linker, "/STACK:1024000000,1024000000")

#include<stdio.h>
#include<string.h>
#include<math.h>

//#include<map>
#include<set>
#include<deque>
#include<queue>
#include<stack>
#include<bitset>
#include<string>
#include<fstream>
#include<iostream>
#include<algorithm>
using namespace std;

#define ll long long
#define Pair pair<int,double>
//#define max(a,b) (a)>(b)?(a):(b)
//#define min(a,b) (a)<(b)?(a):(b)
#define clean(a,b) memset(a,b,sizeof(a))// 水印
//std::ios::sync_with_stdio(false);
//  register
const int MAXN=1e3+10;
const int INF32=0x3f3f3f3f;
const ll INF64=0x3f3f3f3f3f3f3f3f;
const int mod=998244353;
const double PI=acos(-1.0);

struct node{
	double x,y,r;
}dots[MAXN];
double mp[MAXN][MAXN];
double dis[MAXN],vis[MAXN];
int n;
double A,B,C1,C2;

struct cmp{
	bool operator()(const Pair &a,const Pair &b){
		return a.second>b.second;
	}
};

void Dijkstr(){
	priority_queue<Pair,vector<Pair >,cmp> que;
	while(que.size())	que.pop();
	for(int i=0;i<=n+1;++i){
		dis[i]=999999999;
	}
	clean(vis,0);
	dis[0]=0;
	que.push({0,0});
	while(que.size()){
		Pair pir=que.top();
		que.pop();
		vis[pir.first]=1;
		for(int i=0;i<=n+1;++i){
			if(vis[i]==0&&dis[i]>dis[pir.first]+mp[pir.first][i]){
				dis[i]=dis[pir.first]+mp[pir.first][i];
				que.push({i,dis[i]});
			}
		}
	}
	cout<<dis[n+1]<<endl;
}
int main(){
	while(cin>>n>>A>>B>>C1>>C2){
		for(int i=0;i<=n+1;++i){
			for(int j=0;j<=n+1;++j){
				mp[i][j]=999999999;
			}
		}
		mp[0][n+1]=mp[n+1][0]=fabs(C1-C2)/sqrt(A*A+B*B);
		double x,y,r;
		for(int i=1;i<=n;++i){
			cin>>x>>y>>r;
			dots[i]={x,y,r};
			double res=fabs(A*x+B*y+C1)/sqrt(A*A+B*B)-r;
			mp[0][i]=mp[i][0]=res>0?res:0;
			res=fabs(A*x+B*y+C2)/sqrt(A*A+B*B)-r;
			mp[i][n+1]=mp[n+1][i]=res>0?res:0;
		}
		for(int i=1;i<=n;++i){
			for(int j=i+1;j<=n;++j){
				double res=(sqrt((dots[i].x-dots[j].x)*(dots[i].x-dots[j].x)
				+(dots[i].y-dots[j].y)*(dots[i].y-dots[j].y))
				-dots[i].r-dots[j].r);
				mp[i][j]=mp[j][i]=res>0?res:0;
			}
		}
		Dijkstr();
	}
}

//struct node{
//	int a,b;
//	friend node operator +(node x1,node x2){
//		return {x1.a+x2.a,x1.b+x2.b};
//	}
//};
//
//int main()
//{
//	node can1={1,2},can2={2,3},can3;
//	can3=can1+can2;
//	cout<<can3.a<<" "<<can3.b;
//}
/*
1
2305843009213693952


/ar s[MAXN],key[5]="hard";
/ dp[MAXN][5],val[MAXN];//CF的Div2，DP
//
//int main()
//{
//    std::ios::sync_with_stdio(false);
//    int l;
//    while(cin>>l)
//    {
//    	clean(dp,INF64);
//    	clean(val,0);
//    	clean(s,'\0');
//    	cin>>s;
//    	for(int i=0;i<l;++i)
//    		cin>>val[i];
//    	dp[0][0]=0;
//    	for(int i=0;i<l;++i)
//    	{
//    		for(int j=0;j<4;++j)
//    		{//遍历目标串
//    			if(s[i]==key[j])//如果可以消除，则判断是否消除该字符
//    				dp[i+1][j+1]=min(dp[i][j],dp[i][j+1]+val[i]);
//    			else//不能消除继承上一个val
//    				dp[i+1][j+1]=dp[i][j];
//			}
//		}
//
//
//	}
//
//}
//
//if()
//	dp[cnt][len]=dp[cnt-1]dp[len-1];
//else
//	dp[cnt][len]=min(dp[cnt-1][len-1],dp[cnt-1][len]+a[cnt-1]);
//

/*
3 3
F..
#S#
#.E

*/
