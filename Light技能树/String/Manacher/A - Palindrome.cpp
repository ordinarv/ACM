#include<bits/stdc++.h>
using namespace std;

string Manacher(string s){
    //Insert '#'
    string t= "$#";
    for(int i=0;i<s.size();i++){
        t += s[i];
        t += "#";
    }
    //Process t
    vector<int> p(t.size(),0);
    int mx = 0,id = 0,len = 0,center =0;
    for(int i=1;i<t.size();i++){
        p[i] = mx>i ? min(p[2*id-i],mx-i) : 1;
        while(t[i+p[i]] == t[i-p[i]]) p[i]++;
        if(mx < i+p[i]){
            mx = i + p[i];
            id = i;
        }
        if(len < p[i]){
            len = p[i];
            center = i;
        }
    }
    int ans = 0;
    for(int i=1;i<p.size();i++){
        if(ans<p[i]) ans = p[i];
    }
    p.clear();
    //return ans-1;//length
	return s.substr((center - len) / 2, len - 1);//string
}
int main(){
    string s;
    int cas = 0;
    while(cin>>s){
        if(s == "END") break;
        cout<<"Case "<<++cas<<": "<<Manacher(s)<<endl;
    }
    return 0;
}
