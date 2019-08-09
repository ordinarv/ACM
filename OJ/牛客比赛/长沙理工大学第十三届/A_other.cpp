#include<iostream>
#include<strings.h> 
using namespace std;
int main() {
	string s;
	while(getline(cin,s)){
		printf("%s\n",strcasecmp(s.c_str(),"lovelive")==0?"yes":"no");
	}	
	return 0;
}
