#include<bits/stdc++.h>
using namespace std;

const int maxn = 998244353;

int Ans[185];

void Init() {
	for (int i = 1; i <= 179; ++i) {
		for (int j = 3; j <= maxn; ++j) {
			if (360 % j != 0) {
				continue;
			}
			int Angle = (180 - 360 / j);
			if (Angle == i) {
				Ans[i] = j;
				break;
			}
			if (Angle % (j - 2) != 0 || Angle < i) {
				continue;
			}
			Angle /= (j - 2);
			if (i % Angle == 0) {
				Ans[i] = j;
				break;
			}
		}
		if (Ans[i] == 0) {
			Ans[i] = -1;
		}
	}
	Ans[180] = -1;
}

int main() {
	Init();
	int T;
	cin >> T;
	while (T--) {
		int N;
		cin >> N;
		cout << Ans[N] << endl;
	}
	return 0;
}
