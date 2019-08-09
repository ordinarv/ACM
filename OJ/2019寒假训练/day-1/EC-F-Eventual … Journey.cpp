#include<iostream>
#include<cstring>
using namespace std;
const int maxn = 1e5+5;
int type[maxn], tag[maxn];
int cnt[2][2];
//tagi 记录有多少个异类车站与i直接相连

//cnt[1][0]:有0类车站和其相连的1类车站数目
//cnt[1][1]:无0类车站和其相连的1类车站数目
//cnt[0][0]:无1类车站和其相连的0类车站数目
//cnt[0][1]:有1类车站和其相连的0类车站数目
int main(){
	int n,m;
	scanf("%d%d",&n,&m);
	for(int i=1;i<=n;i++){
		scanf("%d",&type[i]);
	}
	memset(tag,0,sizeof(tag));
	for(int i=1,u,v;i<=m;i++){
		scanf("%d%d",&u,&v);
		if(type[u]!=type[v]) {//other station
			tag[u]++;tag[v]++;
		}
	}
	memset(cnt,0,sizeof(cnt));
	for(int i=1;i<=n;i++){
		if(type[i]){
			if(tag[i]) cnt[1][0]++; //1 0直接相连的个数 
			else cnt[1][1]++;       //1i 0 无直接相连的个数 
		}
		else {
			if(tag[i]) cnt[0][1]++;
			else cnt[0][0]++;
		}
	}
	printf("cnt[1][0]%d cnt[1][1]%d cnt[0][0]%d cnt[0][1]%d\n",cnt[1][0],cnt[1][1],cnt[0][0],cnt[0][1]);

	int ans = 0;
	for(int i=1;i<=n;i++){
		if(i>1) printf(" ");
		if(type[i]){
			ans = (cnt[1][0] + cnt[1][1] -1) + tag[i];
			ans += (cnt[0][1] - tag[i]) * 2;
			ans += cnt[0][0] * (tag[i]?2:3);
			printf("%d",ans);
		}
		else {
			ans = 
		}
	}
	/*	*/
	return 0;
}
