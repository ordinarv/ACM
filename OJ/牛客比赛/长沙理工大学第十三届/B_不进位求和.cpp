#include<iostream>
#include<stack>
using namespace std;
int main() {
	string s1,s2;
	stack<int> a1,a2;
	while(cin>>s1>>s2) {
		int ans[1010],cnt=0;
		for(int i=0; i<s1.length(); i++)
			a1.push(s1[i]-48);
		for(int i=0; i<s2.length(); i++)
			a2.push(s2[i]-48);
		while(!a1.empty()||(!a2.empty())) {
			if(!a1.empty()&&(!a2.empty())) {  //两个都不为空
				ans[cnt++]=(a1.top()+a2.top())%10;
				a1.pop();
				a2.pop();
			}

			else if(!a1.empty()&&a2.empty()) {			//2为空，1不为空
				ans[cnt++]=a1.top();
				a1.pop();
			}

			else {			//1为空，2不为空
				ans[cnt++]=a2.top();
				a2.pop();
			}
		}
		int flag=1;
		if(ans[cnt-1]==0)ans[cnt-1]=-1;
		for(int i=cnt-1; i>=0; i--) {
			if(ans[i]==0&&ans[i+1]==-1) ans[i]=-1;
			if(ans[i]!=-1) {
				cout<<ans[i];
				flag=0;
			}
		}
		if(flag)cout<<0;
		cout<<endl;
	}

	return 0;
}
