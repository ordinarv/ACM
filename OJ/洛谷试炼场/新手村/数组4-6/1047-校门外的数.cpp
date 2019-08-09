#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	int a[10010],l,m,cnt=0; 
	memset(a,0,sizeof(a));
	cin>>l>>m;
	int x,y;
	for(int i=0;i<m;i++){
		cin>>x>>y;
		for(int i=x;i<=y;i++)
			a[i]=1;
	}
	for(int i=0;i<=l;i++){
		if(!a[i]) cnt++;
	}
	cout<<cnt<<endl;
	return 0;
}
