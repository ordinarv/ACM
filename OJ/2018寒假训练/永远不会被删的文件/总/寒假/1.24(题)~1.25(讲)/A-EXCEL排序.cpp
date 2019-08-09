#include<stdio.h>
#include<algorithm>
#include<iostream>
#include<string>
using namespace std;
struct unt
{
	int sn;
	string nm;
	int gr;
}pt[100005];
bool cmp1(unt a,unt b)//1按照 学号sn递增 
{
	return a.sn < b.sn;
}
bool cmp2(unt a,unt b)//2姓名字典序nm， 
{
	if(a.nm == b.nm)
		return a.sn < b.sn;
	return a.nm < b.nm;	
}
bool cmp3(unt a,unt b)//3按照成绩gr; 
{
	if(a.gr == b.gr)
		return a.sn < b.sn;
	return a.gr < b.gr;
}
int main(void)
{
	
	int n,c;
	int cnt=1;
	while(scanf("%d",&n)!=EOF)
	{
		
		if(n == 0)
			break;
		scanf("%d",&c);
		
		for(int i = 0; i < n; i++ )
			cin>>pt[i].sn>>pt[i].nm>>pt[i].gr;
		printf("Case %d:\n",cnt);
		if(c==1)
			sort(pt,pt+n,cmp1);
		else if(c == 2)
			sort(pt,pt+n,cmp2);
		else
			sort(pt,pt+n,cmp3);
		
		
		for(int i = 0;i < n;i ++)
		{
			printf("%.6d ",pt[i].sn);
			cout<<pt[i].nm<<' '<<pt[i].gr<<endl;
		}
		cnt++;
	}



	return 0;
}
