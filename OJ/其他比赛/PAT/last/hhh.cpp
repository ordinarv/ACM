#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int maxn = 1e5+5;
set<string>ans;
int main() {
	string s,temp;
	cin>>temp;
	s = temp;
	int n = s.length();
	for(int i=0; i<n; i++) { //1
		s = temp;
		for(int j=i; j<n-1; j++)
			s[j] = s[j+1];
		s[n-1] = ' ';
		ans.insert(s);
	}

	for(int i=0; i<n-1; i++) { //2
		s = temp;
		for(int j=i; j<n-1; j++)
			s[j] = s[j+1];
		s[n-1] = ' ';
		for(int k=i; k<n-1; k++) {

			string ss = s;
			for(int j=k; j<n-1-1; j++)
				ss[j] = ss[j+1];
			ss[n-1-1] = ' ';

			ans.insert(ss);
		}
	}

	for(int i=0; i<n-1; i++) { //3
		s = temp;
		for(int j=i; j<n-1; j++)
			s[j] = s[j+1];
		s[n-1] = ' ';
		for(int k=i; k<n-1; k++) {
		
			string ss = s;
			for(int j=k; j<n-1-1; j++)
				ss[j] = ss[j+1];
			ss[n-1-1] = ' ';

			for(int x=k; x<n-1-1; x++) {
				string sss = ss;
				for(int j=x; j<n-1-1-1; j++)
					sss[j] = sss[j+1];
				sss[n-1-1-1] = ' ';
				ans.insert(sss);
			}

		}
	}
	cout<<ans.size()+1<<endl;
	return 0;
}
