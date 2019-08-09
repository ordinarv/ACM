#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int maxn = 5e2+10;
const int INF = 0x3f3f3f3f;
int n,m,s,e;
int mpt[maxn][maxn],mpd[maxn][maxn],cnt[maxn],d[maxn];
bool vis[maxn];
int tt[maxn],dd[maxn];
void dij_t(int s){
	memset(d,INF,sizeof(d));
	memset(cnt,INF,sizeof(cnt));
	d[s] = 0; cnt[s] = 0;
	for(int i=0;i<n;i++){
		int u,min = INF;
		for(int j=0;j<n;j++){
			if(!vis[j] && min > d[j]){
				min = d[j]; u = j;		
			}
		}
		vis[u] = 1;//Important
		for(int k=0;k<n;k++){
			if(!vis[k] && d[k] > d[u]+mpt[u][k]){
				tt[k] = u;
				cnt[k] = cnt[u] + mpd[u][k];
				d[k] = d[u] + mpt[u][k];
			}
			else if(!vis[k] && d[k] == d[u]+mpt[u][k] && cnt[u]+mpd[u][k] < cnt[k]){
				tt[k] = u;
				cnt[k] = cnt[u] + mpd[u][k];
			}
		}	
	}
}

void dij_d(int s){
	memset(d,INF,sizeof(d));
	memset(vis,0,sizeof(vis));
	memset(cnt,0,sizeof(cnt));
	d[s] = 0; cnt[s] = 1;
	for(int i=0;i<n;i++){
		int u,min = INF;
		for(int j=0;j<n;j++){
			if(!vis[j] && min > d[j]){
				min = d[j]; u = j;		
			}
		}
		vis[u] = 1;//Important
		for(int k=0;k<n;k++){
			if(!vis[k] && d[k] > d[u]+mpd[u][k]){
				dd[k] = u;
				cnt[k] = cnt[u]+1;
				d[k] = d[u] + mpd[u][k];
			}
			else if(!vis[k] && d[k] == d[u]+mpd[u][k] && cnt[u]+1 < cnt[k]){
				dd[k] = u;
				cnt[k] = cnt[u]+1;
				d[k] = d[u] + mpd[u][k];
			}
		}	
	}
}
int main(){
	cin>>n>>m;
	int x,y,a,b,c;
	memset(mpt,INF,sizeof(mpt));
	memset(mpd,INF,sizeof(mpd));
	//memset(tt,-1,sizeof(tt));
	//memset(dd,-1,sizeof(dd));
	for(int i=0;i<m;i++){
		cin>>x>>y>>a>>b>>c;
		if(a == 1){
			mpt[x][y] = c;
			mpd[x][y] = b;
		}
		else {
			mpt[x][y] = mpt[y][x] = c;
			mpd[x][y] = mpd[y][x] = b;
		}
	}
	cin>>s>>e;
	dij_t(s);
	int ans = d[e],k=e;
	stack<int> st,sd;
	while(tt[k]){
		st.push(tt[k]);
		k=tt[k];
	}
	
	dij_d(s);
	k = e;
	while(dd[k]){
		sd.push(dd[k]);
		k=dd[k];
	}
	if(st == sd){
		cout<<"Time = "<<ans<<"; Distance = "<<d[e]<<": ";
		while(!st.empty()){
			cout<<st.top()<<" => ";
			st.pop();
		}
		cout<<e<<endl;
	}
	else {
		cout<<"Time = "<<ans<<": ";
		while(!st.empty()){
			cout<<st.top()<<" => ";
			st.pop();
		}
		cout<<e<<endl;
		
		cout<<"Distance = "<<d[e]<<": ";
		while(!sd.empty()){
			cout<<sd.top()<<" => ";
			sd.pop();
		}
		cout<<e<<endl;
	}/**/
	return 0;
}
