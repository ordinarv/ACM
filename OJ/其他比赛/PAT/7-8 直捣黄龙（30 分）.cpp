#include<iostream>
#include<map>
#include<stack>
#include<string>
using namespace std;
map<string,int>p;
map<int,string>pp;
int n,m,i,j,cost[201][201],ene[201],fene[201];
int dis[201],cnt[201],visited[201],dist,f[201];
void min(int s) {
	int i,j;
	dis[s]=1,visited[s]=1;
	for(i=0; i<n; i++) {
		int k=-1,min=999999;
		for(j=0; j<n; j++) {
			if(visited[j]==0 && cost[s][j]<min) {
				min=cost[s][j];
				k=j;
			}
		}
		if(k==-1) break;
		visited[k]=1;
		for(j=0; j<n; j++) {
			if(visited[j]==0 && cost[s][j]>cost[s][k]+cost[k][j]) {
				f[j]=k;
				dis[j]=dis[k];
				cost[s][j]=cost[s][k]+cost[k][j];
				fene[j]=fene[k]+ene[j];
				cnt[j]=cnt[k]+1;
			} else if(visited[j]==0 && cost[s][j]==cost[s][k]+cost[k][j]) {
				dis[j]=dis[j]+dis[k];
				if(cnt[j]<cnt[k]+1) {
					f[j]=k;
					fene[j]=fene[k]+ene[j];
					cnt[j]=cnt[k]+1;
				} else if(cnt[j]==cnt[k]+1) {
					if(fene[j]<fene[k]+ene[j]) {
						f[j]=k;
						fene[j]=fene[k]+ene[j];
					}
				}
			}
		}
	}
}
int main() {
	string begin,end,path,name,x,y;
	cin>>n>>m>>begin>>end;
	for(i=0; i<n; i++) {
		for(j=0; j<n; j++) cost[i][j]=cost[j][i]=999999;
	}
	p[begin]=0,pp[0]=begin;
	for(i=1; i<n; i++) {
		cin>>name>>ene[i];
		p[name]=i;
		pp[i]=name;
		fene[i]=ene[i];
		cnt[i]=1;
		dis[i]=1;
	}
	while(m--) {
		cin>>x>>y>>dist;
		cost[p[x]][p[y]]=cost[p[y]][p[x]]=dist;
	}
	min(0);
	int goal=p[end],index=p[end];
	path=path+begin;
	stack<string>ss;
	ss.push(end);
	while(f[index]!=0) {
		ss.push(pp[f[index]]);
		index=f[index];
	}
	while(!ss.empty()) {
		path=path+"->"+ss.top();
		ss.pop();
	}
	cout<<path<<endl;
	cout<<dis[goal]<<" "<<cost[0][goal]<<" "<<fene[goal]<<endl;
	return 0;
}

