#include<iostream>
#include<map>
#include<cstdio>
using namespace std;
char check(char c){
	if(c>='0' && c<='9' ) return c;
	else if(c=='A' || c== 'B' || c== 'C') return '2';
	else if(c=='D' || c== 'E' || c== 'F') return '3';
	else if(c=='G' || c== 'H' || c== 'I') return '4';
	else if(c=='J' || c== 'K' || c== 'L') return '5';
	else if(c=='M' || c== 'N' || c== 'O') return '6';
	else if(c=='P' || c== 'R' || c== 'S') return '7';
	else if(c=='T' || c== 'U' || c== 'V') return '8';
	else if(c=='W' || c== 'X' || c== 'Y') return '9';
}
int main(){
	int n;
	map<string,int> m;
	string s;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		cin>>s;
		int len = s.length();
		string tem="";
		for(int i=0;i<len;i++)
		{
			if(s[i] == '-') continue;
			tem += check(s[i]);
		}
		m[tem]++;
	}
	map<string,int>::iterator it = m.begin();
	string s1="",s2="";
	for(;it != m.end();it++){
		if(it->second <= 1) continue;
		s1 = it->first;
		for(int i=0;i<7;i++){
			printf("%c",s1[i]);
			if(i == 2) printf("-");
		}
		printf(" %d\n",it->second);
	}
	return 0;
}
