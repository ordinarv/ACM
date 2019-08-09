#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	char s1[15],s2[15];
	cin>>s1>>s2;
	int x1,x2,sum1=1,sum2=1,len1=strlen(s1),len2=strlen(s2);
	for(int i=0;i<len1;i++){
		x1=s1[i]-64; 
		sum1*=x1; 
	}
	for(int i=0;i<len2;i++){
		x2=s2[i]-64;
		sum2*=x2;	
	}
	if(sum1%47==sum2%47) cout<<"GO"<<endl;
	else cout<<"STAY"<<endl;
	return 0;
}
