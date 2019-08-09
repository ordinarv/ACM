#include<iostream>
#include<cstring>
using namespace std;
const int maxn=5010;

int lowbit(int x){//最低位的一 
	return x&-x;
}
void add(int i,int val){//修改，更新后缀和。 
	for(;i<=n;i+=lowbit(i)){
		tre[i]+=val;
	}
}
int sum(int i){//1~x的和，t从1开始标号 
	int ans=0;
	for(;i>0;i-=lowbit(i)){
		ans+=tre[i];
	}
	return ans;
}
int main(){
	
    return 0;
}

