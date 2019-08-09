#include<iostream>
#include<cstring>
#include<string>
using namespace std;
int main() {
	string s;
	while(getline(cin,s)) {
		if((s[0]=='l'||s[0]=='L')&&(s[1]=='o'||s[1]=='O')&&(s[2]=='v'||s[2]=='V')&&(s[3]=='e'||s[3]=='E')&&(s[4]=='l'||s[4]=='L')
		        &&(s[5]=='i'||s[5]=='I')&&(s[6]=='v'||s[6]=='V')&&(s[7]=='e'||s[7]=='E'))
			cout<<"yes"<<endl;
		else cout<<"no"<<endl;
	}
	return 0;
}
