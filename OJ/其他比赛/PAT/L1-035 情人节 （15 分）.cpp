#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int maxn = 1e5+5;
int main(){
    vector<string>a;
    string s;
    while(cin>>s){
        if(s==".")break;
        a.push_back(s);
    }
    if(a.size()>=14) cout<<a[1]<<" and "<<a[13]<<" are inviting you to dinner..."<<endl;
    else if(a.size()>=2) cout<<a[1]<<" is the only one for you..."<<endl;
    else cout<<"Momo... No one is for you ..."<<endl;

    return 0;
}
