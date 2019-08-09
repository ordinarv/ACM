//#include<bits/stdc++.h>
#include<iostream>
#include<string>
#include<vector>
using namespace std;
const int maxn = 110010;
char ma[maxn*2];
int mp[maxn*2];
void Manacher(char s[],int len){
    //Insert '#'
    int l = 0;
    ma[l++] = '$';ma[l++] = '#';
    for(int i=0;i<len;i++){
        ma[l++] = s[i];
        ma[l++] = '#;'
    }
    //Process t
    ma[l] = 0;
    int mx = 0,id = 0;
    for(int i=0;i<l;i++){
        mp[i] = mx>i ? min(mp[2*id-i],mx-i) : i;
        while(ma[i+mp[i]] == ma[i-mp[i]]) mp[i]++;
        if(i+mp[i]>mx){
            mx = i+mp[i];
            id = i;
        }
    }
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

