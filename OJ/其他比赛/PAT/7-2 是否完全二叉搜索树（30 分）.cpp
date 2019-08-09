#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <bits/stdc++.h>
using namespace std;
int a[105],b;
int n;
void add(int i,int d)//添加的同时在a数组中排好序
{
    if(a[i] == -1)
    {
        a[i] = d;
        return;
    }
    if(d > a[i])
        add(i*2,d);
    else
        add(i*2+1,d);
}
int main()
{
    cin>>n;
    memset(a,-1,sizeof(a));
    for(int i = 0;i < n;i ++)
    {
        cin>>b;
        add(1,b);//第一次插的是根节点
    }
    int flag = 0,i = 0;
    //flag是记录二叉搜索树的所有结点个数，并控制输出格式
    //i则是判断是否是完全二叉树的，若i == n + 1，则一定是
    //因为a[0]肯定是-1，一上来i++，i就是1（一定要注意树是从下标1开始开始插入的）
    //所有如果是完全二叉树，i一定比n多一个
    while(flag < n)
    {
        while(a[i] == -1)i++;//
        if(flag)
            cout<<" "<<a[i];
        else
            cout<<a[i];
        i++;
        flag++;
    }
    if(i == n + 1)//此时是完全二叉树
    {
        cout<<endl;
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<endl;
        cout<<"NO"<<endl;
    }
}

