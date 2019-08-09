#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int maxn = 1e6+5;
int f[maxn];
double w[maxn],r,z;
int sup[maxn];
double findw(int n){
    if(sup[n]){
        return w[n] = findw(f[n])*r*sup[n];
        sup[n] = 0;//放这对吗 要是得道者的父亲也是得道者呢
    }
    else{
        if(w[n]) return w[n];
        return w[n] = findw(f[n])*r;
    }
}
vector<int>ans;
int main(){
    int n,k,x;
    double sum=0;
    cin>>n>>z>>r;
    r = (1-r)/100;
    w[0] = z; f[0] = 0;
    for(int i=0;i<n;i++){
        cin>>k;
        for(int j=0;j<k;j++){
            cin>>x;
            f[x] = i;
        }
        if(k == 0) {
            cin>>x;
            sup[i] = x;
            ans.push_back(i);
        }
    }
    for(int i=0;i<ans.size();i++){
        double x = findw(ans[i]);
       // printf("id = %d  %llf\n",ans[i],x);
        sum+=x;
    }
    ans.clear();
    printf("%lld\n",(ll)sum);
    return 0;
}
//    for(int i=0;i<n;i++){
//        cout<<findw(i)<<endl;
//    }
//for(int i=0;i<ans.size();i++)
//        cout<<ans[i]<<endl;
