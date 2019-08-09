#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int maxn = 1e5+5;
int main(){
    int t;
    int h,w;
    double stdw=0;
    scanf("%d",&t);
    while(t--){
        scanf("%d%d",&h,&w);
        stdw = (h-100)*2*0.9;
        //cout<<stdw<<endl;  精度问题 stdw*0.1 wa but /10 ac
        if(fabs(w-stdw)<stdw/10)printf("You are wan mei!\n");
        else if(w>stdw) printf("You are tai pang le!\n");
        else if(w<stdw) printf("You are tai shou le!\n");
    }

    return 0;
}
