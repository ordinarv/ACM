#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;
struct unt{
	int id,mark;	
}stu[5010];
bool cmp(unt a,unt b){
	if(a.mark==b.mark)
		return a.id<b.id;
	return a.mark>b.mark;		
}
int main(){
	int m,n;
	cin>>n>>m;
	m*=1.5;
	for(int i=0;i<n;i++)
		cin>>stu[i].id>>stu[i].mark;
	sort(stu,stu+n,cmp);
	int fm=stu[m-1].mark,cnt=0;
	for(int i=0;i<n;i++){
		if(stu[i].mark>=fm) cnt++;
	}	
	cout<<fm<<' '<<cnt<<endl;
	for(int i=0;i<cnt;i++)
		cout<<stu[i].id<<' '<<stu[i].mark<<endl;
	return 0;
} 
