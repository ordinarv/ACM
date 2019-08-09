#include<bits/stdc++.h>
using namespace std;
typedef struct{
  int a;//a是父母的编号
  int b;//b是该编号所对应的辈分
}T;
int my(map<int,T> &op,int i){//传引用保证在函数内修改的值在主函数中仍然有效
  if(op[i].b==0){
  	if(op[i].a!=-1){
  		my(op,op[i].a);
	  }
  }
  op[i].b=op[op[i].a].b+1;
  return op[i].b;//返回该编号的辈分
}
int main(){
  map<int,T> op;
  int n;
  cin>>n;
  int d;
  for(int i=1;i<=n;++i){
    scanf("%d",&d);
    op[i].a=d;
    if(d==-1) op[i].b=1;
  }
  int c;
  int max=1;
  for(int i=1;i<=n;++i){
  	if(op[i].a==-1) continue;
    c=my(op,i);
    if(c>max) max=c;//max记录辈分的最大值
  }
  printf("%d\n",max);
  int cnt=0;
  for(auto i=op.begin();i!=op.end();++i){
  	if(i->second.b==max){
	    if(cnt) printf(" ");
	    cnt++;
	    printf("%d",i->first);
	}
  }
}

