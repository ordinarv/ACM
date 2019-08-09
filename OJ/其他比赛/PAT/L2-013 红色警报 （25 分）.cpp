//本题是与并查集有关的题目
#include<bits/stdc++.h>
using namespace std;
const int MAXN=505;
int f[MAXN];
int g[MAXN][MAXN];
int visit[MAXN];
void init(int n){//并查集初始化
  for(int i=0;i!=n;++i){
    f[i]=i;
  }
}
int find(int x){//构造查询初始始祖的函数
  if(f[x]==x) return x;
  else return f[x]=find(f[x]);
}
bool un(int x,int y){//默认将y并到x城市圈中，bool型是为了查看连通性
  x=find(x);
  y=find(y);
  if(x!=y){
    f[y]=x;
    return true;
  }else{
    return false;
  }
}
//本代码思路：先用栈将被攻占的城市保存起来，将没被攻占的城市使用并查集形成城市圈，再将被攻占的城
//市并入到城市圈中，每并入一个被攻占的城市，统计该城市并入城市圈中，多出来几条路，如过大于1，则该输出红色警报.
int main(){
  stack<int> op;
  stack<string> o;
  int n,m;
  cin>>n>>m;
  init(n);
  int k,l;
  for(int i=0;i!=m;++i){
    scanf("%d %d",&k,&l);
    g[k][l]=g[l][k]=1;
  }
  cin>>k;
  for(int i=0;i!=k;++i){
  	scanf("%d",&l);
  	op.push(l);
  	visit[l]=1;
  }
  for(int i=0;i!=n;++i){
  	if(visit[i]) continue;
  	for(int j=0;j!=n;++j){
  		if(!visit[j]&&g[i][j]) un(i,j);
	  }
  }
  if(n==k) o.push("Game Over.");
  for(int i=0;i!=k;++i){
  	l=op.top();
  	op.pop();
  	visit[l]=0;
  	int cnt = 0;
    for(int i=0;i!=n;++i){
  		if(!visit[i]&&g[l][i]){
  			if(un(l,i)) cnt++;	
		}
  	}
  	if(cnt>1){
  		char tmp[100];
  		sprintf(tmp,"Red Alert: City %d is lost!\n",l);
  		o.push(tmp);
	  }else{
	  	char tmp[100];
	  	sprintf(tmp,"City %d is lost.\n",l);
	  	o.push(tmp);
	  }
  }
  while(!o.empty()){
  	cout<<o.top();
  	o.pop();
  }
}

