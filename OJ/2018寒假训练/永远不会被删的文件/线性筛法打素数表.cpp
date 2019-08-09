#include<bits/stdc++.h>

using namespace std;
const int N=10000;
bool isprime[N];
int cnt=0,pri[N];
void ispri()//用线性筛法打素数表
{
    memset(isprime,0,sizeof(isprime));
    for(int i=2;i<=N;i++)
    {
        if(!isprime[i])
            pri[cnt++]=i;
        for(int j=0;j<cnt&&i*pri[j]<=N;j++)
        {
            isprime[i*pri[j]]=1;//一表示合数。 
            if(!(i%pri[j]))
                break;
        }
    }
    return;
}
int main()
{
	ispri();
	for(int i=0;i<N;i++)
	{
		if(!isprime[i]) cout<<i<<' '; 
	}
	
	return 0;
}
 
