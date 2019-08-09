#include<stdio.h>
#include<string.h>
#include<algorithm>
using namespace std;
struct unt{
	char nm[105];
	double m=0;
	int v=0;
	double ans=0;
	double mp=0;
};
bool cmp(unt a,unt b)
{
	if(a.mp==b.mp)
		return a.v>b.v;
	return a.ans<b.ans;
}

int main(void)
{
	int t;unt mk[105];
	scanf("%d",&t);
	while(t--)
	{
		int n,flag=0;
		scanf("%d",&n);
		for(int i=0;i<n;i++){
			scanf("%s%d%d",mk[i].nm,&mk[i].m,&mk[i].v);
			if(mk[i].v<200){
				i--;n--;
			}
			mk[i].ans=(mk[i].v/200.0)<5?(mk[i].v/200.0):5;
			mk[i].mp=mk[i].m/mk[i].ans;
		}
		sort(mk,mk+n,cmp);
		printf("%s\n",mk[0].nm);
	}
	
	return 0;
}


