#include<iostream>
#include<cstring>
#include<cstdio>
#include<map>
#include<string>
using namespace std;
map<string,int> s;
int main()
{
    s["lovelive"]=1;
    char a[1005];
    while(gets(a))
    {
        int len=strlen(a);
        for(int i=0;i<len;i++)
          if(a[i]>='A'&&a[i]<='Z')
            a[i]+=32;
        if(s[a]==1)
          cout<<"yes"<<endl;
        else
          cout<<"no"<<endl;
    }
    return 0;
}
