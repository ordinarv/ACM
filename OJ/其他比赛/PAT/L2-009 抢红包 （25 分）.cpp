#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int maxn = 1e4+5;
struct unt{
    int value,cnt,id;
}stu[maxn];
bool cmp(unt a,unt b){
    if(a.value == b.value && a.cnt == b.cnt) return a.id<b.id;
    else if(a.value == b.value) return a.cnt>b.cnt;
    return a.value > b.value;
}
int main(){
    int t,k,sum,n,p;
    cin>>t;
    for(int i=1;i<=t;i++){
        sum = 0;
        stu[i].id = i;
        cin>>k;
        for(int j=0;j<k;j++){
            cin>>n>>p;
            sum+=p;
            stu[n].value+=p;
            stu[n].cnt++;
        }
        stu[i].value-=sum;
    }
    sort(stu+1,stu+t+1,cmp);
    for(int i=1;i<=t;i++){
        printf("%d %.2lf\n",stu[i].id,stu[i].value/100.0);
    }

    return 0;
}
