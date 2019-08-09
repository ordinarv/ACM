#include<iostream>  
#include<cstring>  
#include<string>  
#include<cstdio>  
#include<map>  
#include<algorithm>  
#define INF 0xfffffff  
#define MAX 155  
using namespace std;  
int p[MAX][MAX];  
int visit[MAX],dis[MAX];  
int N;  
int Dijkstra(int s,int n)  
{  
      int i,j;  
      for(i=1;i<=n;i++) dis[i]=p[s][i],visit[i]=false;  
      dis[1]=0;  
      visit[1]=true;  
      for(i=1;i<=n;i++)  
      {  
                       int k,tmp=INF;  
                       for(j=1;j<=n;j++)  
                          if(!visit[j]&&dis[j]<tmp) tmp=dis[k=j];  
                       if(tmp==INF) break;  
                       visit[k]=true;  
                       for(j=1;j<=n;j++)  
                           if(!visit[j]&&dis[j]>dis[k]+p[k][j])  
                            dis[j]=dis[k]+p[k][j];  
      }  
      return dis[2];  
}  
int main()  
{  
    int i,j,t;  
    char s1[35],s2[35];  
    bool flag;  
    map<string,int> mp;  
    while(scanf("%d",&N)&&N!=-1)  
    {  
         mp.clear();  
        for(i=1;i<=MAX;i++)  
            for(j=1;j<=MAX;j++)  
               p[i][j]=INF;  
         scanf("%s%s",s1,s2);  
         mp[s1]=1;  
         mp[s2]=2;  
         int count=3;  
         flag=0;  
         if(strcmp(s1,s2)==0) flag=1;  
         for(i=1;i<=N;i++)  
         {  
               scanf("%s%s%d",s1,s2,&t);  
               if(!mp[s1]) mp[s1]=count++;  
               if(!mp[s2]) mp[s2]=count++;  
               p[mp[s1]][mp[s2]]=p[mp[s2]][mp[s1]]=t;           
         }  
         if(flag) {printf("0\n");continue;}  
         Dijkstra(1,count);  
         printf("%d\n",dis[2]==INF?-1:dis[2]);  
    }  
    return 0;  
}  
