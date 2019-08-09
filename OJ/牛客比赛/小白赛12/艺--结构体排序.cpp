#include<iostream>
using namespace std;
struct unt{
	int t,v;
};
bool cmp(unt a,unt b){
	return a.t<b.t;
}
int main()
{
	int n,m,t;
	cin>>n>>m>>allt;
	unt s1[100010],s2[100010];
	for(int i=0;i<n;i++)
		cin>>s1[i].t>>s1[i].v;
	for(int i=0;i<m;i++)
		cin>>s2[i].t>>s2[i].v;
	sort(s1,s1+n);sort(s2,s2+m);
	int max;
	for(int i=0;i<allt;){
		if(s1>=0&&s2>=0)
			max=s1.v>s2.v?s1.v:s2.v; 
		else max=0;
		
		
	}
	
	return 0;
}
