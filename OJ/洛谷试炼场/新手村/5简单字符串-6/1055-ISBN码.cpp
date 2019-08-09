#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	char s[20];
	cin>>s; 
	int len=strlen(s),cnt=0,sum=0,x;
	for(int i=0;i<len-1;i++){
		if(s[i]!='-'){
			x=s[i]-48;
			cnt++; 
			sum+=x*cnt;
		}	
	}
	char c;
	if(sum%11==10) c='X';
	else c=sum%11+48;
	if(c==s[len-1]) cout<<"Right"<<endl;
	else {
		s[len-1]=c;
		cout<<s<<endl;
	}
	return 0;
}
