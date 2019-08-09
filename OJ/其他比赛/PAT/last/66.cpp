#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int maxn = 1e2+5;
const int INF = 0x3f3f3f3f;
using namespace std;
vector<int> v;
map<string ,int >vis,ans;
int n;
string solve(string s) {
	string ans;
	for(int i=0; i<s.size(); i++) {
		if(s[i]>='A'&&s[i]<='Z') s[i]=tolower(s[i]);
		else if(s[i]>='a'&&s[i]<='z'||s[i]>='0'&&s[i]<='9') s[i]=s[i];
		else s[i]=' ';
	}
	if(s[0]==' ') {
		for(int i=1; i<s.size(); i++)
			ans.push_back(s[i]);
	} 
	else if(s[(s.size()-1)]==' ')for(int i=0; i<s.size()-1; i++)ans.push_back(s[i]);
	else ans=s;
	return ans;
}


int main() {
	string s,topic;;
	cin>>n;
	getchar();
	for(int i=0; i<n; i++) {
		vis.clear();
		getline(cin,s);

		v.clear();
		for(int i=0; s[i]; i++) {
			if(s[i]=='#')
				v.push_back(i);
		}
		while(v.size()) {
			int a=v.front();
			v.erase(v.begin());
			int b=v.front();
			v.erase(v.begin());
			//
			string s1=s.substr(a+1,b-a-1);
			string s2=solve(s1);
			s2[0]=toupper(s2[0]);
			if(!vis[s2]) {
				ans[s2]++;
				vis[s2]=1;
			}
		}
	}
	int cnt=0;
	int maxx=0;

	for(map<string ,int >::iterator it=ans.begin(); it!=ans.end(); it++) {
		string key=it->first;
		int value = it->second;
		if(value>maxx) {
			maxx=value;
			cnt=0;
			topic=key;
		} 
		else if(value==maxx)cnt++;
	}
	cout<<topic<<endl<<maxx<<endl; 
	/*
	for(map<string ,int >::iterator it=ans.begin(); it!=ans.end(); it++)
	*/
	cout << "And " << cnt << " more ..." << endl;
	return 0;

}
