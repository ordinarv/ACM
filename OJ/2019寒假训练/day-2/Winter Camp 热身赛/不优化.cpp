
  #include<bits/stdc++.h>
  using namespace std;
  typedef long long ll;
  const int maxn = 1e3+5;
  #define Pair pair<int,double>
  #define clean(a,b) memset(a,b,sizeof(a))// 水印
  struct unt{
  	int x,y,r;
  }cir[maxn];
  double mp[maxn][maxn];
  double d[maxn],vis[maxn];
  int n;
  double a,b,c1,c2,x,y,r;

	int dij() {
		memset(vis,0,sizeof(vis));
		for(int i=0;i<=n+1;i++)
			d[i] = 999999999999;
		//memset(d,INF,sizeof(d));
		d[0] = 0;//默认起点为1，注意没有0点
		for(int i = 0 ; i<=n+1; i++) {
			int u = -1;double min=999999999999;
			for(int j = 0; j<=n+1; j++) {
				if(!vis[j]&&d[j]<min) {
					u = j;
					min = d[j];
				}
			}
			if(u == -1) return -1;// 不连通
			vis[u] = 1;
			for(int k = 0; k<=n+1; k++) {
				if(!vis[k]&&mp[u][k]+d[u]<d[k])
					d[k]=mp[u][k]+d[u];
			}
		}
		cout<<d[n+1]<<endl;//终点
	}

  int main() {
  	double dis,temp;
  cin>>n>>a>>b>>c1>>c2;
  	//scanf("%d%d%d%d%d",&n,&a,&b,&c1,&c2);

  	for(int i=1;i<=n;i++)
  		for(int j=1;j<=n;j++)
  			mp[i][j] = mp[j][i] = 99999999999;
  	mp[0][n+1] = mp[n+1][0] =fabs(c1-c2)/sqrt(a*a+b*b);

  	for(int i=1;i<=n;i++){
  			//scanf("%d%d%d",&cir[i].x,&cir[i].y,&cir[i].r);
  			cin>>cir[i].x>>cir[i].y>>cir[i].r;
  			dis = fabs((a*cir[i].x+b*cir[i].y+c1)/sqrt(a*a+b*b));//L1
  			mp[0][i] = mp[i][0] = dis<=cir[i].r?0:dis-cir[i].r;

  			dis = fabs((a*cir[i].x+b*cir[i].y+c2)/sqrt(a*a+b*b));//L2
  			mp[n+1][i] = mp[i][n+1] = dis<=cir[i].r?0:dis-cir[i].r;
  		}
  	for(int i=1; i<n; i++) {
  			for(int j=i+1;j<=n;j++){
  				dis=sqrt((cir[i].x-cir[j].x)*(cir[i].x-cir[j].x)+(cir[i].y-cir[j].y)*(cir[i].y-cir[j].y));
  				mp[i][j] = mp[j][i] = dis<=(cir[i].r+cir[j].r)?0:dis-cir[i].r-cir[j].r;
  			}
  		}
  	dij();

  	return 0;
  }
