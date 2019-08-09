#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int maxn = 1e3+5;
#define Pair pair<int,double>
#define clean(a,b) memset(a,b,sizeof(a))
struct unt {
	int x,y,r;
} cir[maxn];
double mp[maxn][maxn];
double dis[maxn],vis[maxn];
int n;
double a,b,c1,c2,x,y,r;


struct cmp {
	bool operator()(const Pair &a,const Pair &b) {
		return a.second>b.second;
	}
};

void Dijkstr() {
	priority_queue<Pair,vector<Pair >,cmp> que;
	while(que.size())	que.pop();
	for(int i=0; i<=n+1; ++i) {
		dis[i]=999999999;
	}
	clean(vis,0);
	dis[0]=0;
	que.push({0,0});
	while(que.size()) {
		Pair pir=que.top();
		que.pop();
		vis[pir.first]=1;
		for(int i=0; i<=n+1; ++i) {
			if(vis[i]==0&&dis[i]>dis[pir.first]+mp[pir.first][i]) {
				dis[i]=dis[pir.first]+mp[pir.first][i];
				que.push({i,dis[i]});
			}
		}
	}
	cout<<dis[n+1]<<endl;
}

int main() {
	double dis,temp;
	cin>>n>>a>>b>>c1>>c2;


	for(int i=1; i<=n; i++)
		for(int j=1; j<=n; j++)
			mp[i][j] = mp[j][i] = 99999999999;
	mp[0][n+1] = mp[n+1][0] =fabs(c1-c2)/sqrt(a*a+b*b);

	for(int i=1; i<=n; i++) {

		cin>>cir[i].x>>cir[i].y>>cir[i].r;
		dis = fabs((a*cir[i].x+b*cir[i].y+c1)/sqrt(a*a+b*b));//L1
		mp[0][i] = mp[i][0] = dis<=cir[i].r?0:dis-cir[i].r;

		dis = fabs((a*cir[i].x+b*cir[i].y+c2)/sqrt(a*a+b*b));//L2
		mp[n+1][i] = mp[i][n+1] = dis<=cir[i].r?0:dis-cir[i].r;
	}
	for(int i=1; i<n; i++) {
		for(int j=i+1; j<=n; j++) {
			dis=sqrt((cir[i].x-cir[j].x)*(cir[i].x-cir[j].x)+(cir[i].y-cir[j].y)*(cir[i].y-cir[j].y));
			mp[i][j] = mp[j][i] = dis<=(cir[i].r+cir[j].r)?0:dis-cir[i].r-cir[j].r;
		}
	}
	Dijkstr();

	return 0;
}
