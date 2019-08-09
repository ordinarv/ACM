#include<bits/stdc++.h>
using namespace std;
int x, k = 0, ans[1000000];
string s;
bool cal() {
	int t = 0;
	k = 0;
	for(int i = 0; i < s.size(); i++) {
		t = t * 10 + s[i] - 48;
		if(k || t >= x) { //就是这，我一开始是t>=x所以导致一直没拿全分数
			ans[k++] = t / x;
			t %= x;
		}
	}
	if(t == 0)
		return 0;
	return 1;
}

int main() {
	cin >> x;
	s = "1";
	while(cal())
		s += "1";
	for(int i = 0; i < k; i++)
		cout << ans[i];
	cout << " " << s.size() << endl;
	return 0;
}

