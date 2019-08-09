#include<stdio.h>
#include<algorithm>
#include<string.h>
using namespace std;
struct unt
{
	int sn;
	char nm[10];
	int gr;
}pt[100005];
bool cmp1(unt a,unt b)//1按照 学号sn递增 
{
	return a.sn < b.sn;
}
bool cmp2(unt a,unt b)//2姓名字典序nm， 
{
	if(strcmp(a.nm,b.nm) == 0)
		return a.sn < b.sn;
	else if(strcmp(a.nm,b.nm))	
		return 0;
	else
		return 1;	
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
	while(scanf("%d%d",&n,&c)!=EOF)
	{
		if(n == 0)
			break;
		
		for(int i = 0; i < n; i++ )
		{
			cin>>pt[i].sn>>pt[i].nm>>pt[i].gr
			scanf("%d%s%d",&,,&);
		}
		if(c==1)
		{
			
			sort(pt,pt+n,cmp1);

		}
		else if(c == 2)
		{

			
			sort(pt,pt+n,cmp2);
		}
		else
		{
		
			sort(pt,pt+n,cmp3);
		}
		
		printf("Case %d:\n",c);
		for(int i = 0;i < n;i ++)
		{
			printf("%.6d %s %d\n",pt[i].sn,pt[i].nm,pt[i].gr);
		}
	}



	return 0;
}
