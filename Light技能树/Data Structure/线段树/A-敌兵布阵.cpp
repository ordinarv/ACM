#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
typedef long long ll;
const int maxn=50010;
int c[maxn];
int lowbit(int x){
	return x&-x;
}
void add(int i,int val){
	for(;i<maxn;i+=lowbit(i))
		c[i]+=val;
}
int sum(int i){
	int ans=0;
	for(;i>0;i-=lowbit(i))//!=0
		ans+=c[i];
	return ans;
}
int main(){
	int t,n,cas=1;
	scanf("%d",&t);
	while(t--){
		printf("Case %d:\n",cas++);
		memset(c,0,sizeof(c));
		scanf("%d",&n);
		int x;
		for(int i=1;i<=n;i++){
			//scanf("%d",&c[i]);
			scanf("%d",&x);
			add(i,x);
		}
		char s[21];
		int i,j;
		while(1){
			scanf("%s",s);
			if(s[0]=='E')break;
			scanf("%d%d",&i,&j);
			if(s[0]=='Q'){//query ²éÑ¯ 
				printf("%d\n",sum(j)-sum(i-1));
			}
			else if(s[0]=='A'){
				add(i,j);
			}
			else{
				add(i,-j);  
			}
		}
		
	}
	return 0;
}


