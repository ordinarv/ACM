#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;
struct unt{
	int dis,pow;
}d[5010];
bool cmp(unt a,unt b){
	return a.pow<b.pow;
}
 
int main()
{
	int n,s,a,b,cnt=0;
	cin>>n>>s;cin>>a>>b;
	for(int i=0;i<n;i++)
		cin>>d[i].dis>>d[i].pow;
	sort(d,d+n,cmp);
	for(int i=0;i<n;i++){
		if(a+b>=d[i].dis){	
			if(s-d[i].pow>=0){	
				cnt++;
				s-=d[i].pow;
				//cout<<d[i].dis<<s<<endl;				
			}
			else break;
		}
	}
	cout<<cnt<<endl;
	return 0;
}
