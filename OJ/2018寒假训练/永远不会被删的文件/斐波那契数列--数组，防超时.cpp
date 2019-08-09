#include<bits/stdc++.h>

using namespace std;
int main()
{
	int n,t,w[40]={0};
    w[1]=1;w[0]=1;
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(int i=2;i<n;i++)
        {
            w[i]=w[i-1]+w[i-2];
        }
        printf("%d\n",w[n-1]); 
        
    }
	
	
	
	
	
	
	
	return 0;
}
