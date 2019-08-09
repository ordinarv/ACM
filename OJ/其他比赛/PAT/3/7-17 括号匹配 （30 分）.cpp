#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int maxn = 1e3+10;
int main() {
	string s;
	stack<char> st;
	getline(cin,s);
	int flag = 0;
	for(int i=0; i<s.length(); i++) {
		if(s[i]=='(' || s[i]=='[' || s[i]=='{') st.push(s[i]);
		else if(s[i]==')' || s[i]==']' || s[i]=='}') {
			if(!st.empty()) {
				if(s[i] == ')' && st.top() == '(') st.pop();
				else if(s[i] == ']' && st.top() == '[') st.pop();
				else if(s[i] == '}' && st.top() == '{') st.pop();
				else {
					flag = 1;
					break;
				}
			}
			else {
				flag = 1;break;
			}

		}
	}
	if(!flag && st.size() == 0) cout<<"yes"<<endl;
	else cout<<"no"<<endl;
	return 0;
}
