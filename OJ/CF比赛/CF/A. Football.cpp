#include<iostream>
#include<cstring>
using namespace std;
const int maxn = 1e2+5;
int main(){
	char a[maxn];
	cin>>a;
	int len = strlen(a);
	int flag =0;
	for(int i=0;i<len;i++){
		if(a[i] == a[i+1]){
			int j;
			for(j=i+2;j<=i+6;j++){
				if(a[i] != a[j]){
					break;
				}
			}
			if(j == i+7){flag = 1;
			break;
			}
		}
	}
	if(flag) cout<<"YES"<<endl;
	else cout<<"NO"<<endl;
	return 0;
}
