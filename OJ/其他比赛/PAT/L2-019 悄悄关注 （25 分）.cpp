#include<bits/stdc++.h>
using namespace std;
int main() {
	set<string> op;//保存用户关注的人的名字
	map<string,int> o;//保存被点赞用户id和点赞次数
	int n;
	cin>>n;
	string c;
	for(int i=0; i!=n; ++i) {
		cin>>c;//此处可用scanf提高效率，例如char kk[15] scanf（“%s”，kk）；c=kk；scanf读取的效率远高于cin，
		//在数据量很大的情况下有效的减少耗时，甚至原本运行超时的代码，将cin改为scanf后可能会通过
		op.insert(c);
	}
	double av=0;
	int m;
	int d;
	cin>>m;
	for(int i=0; i!=m; ++i) {
		cin>>c>>d;
		av+=d;
		o[c]=d;
	}
	av/=m;
	int cnt=0;
	for(auto i=o.begin(); i!=o.end(); ++i) {
		if(i->second>av&&!op.count(i->first)) { //改用户id被点赞次数大于平均值且不再被关注集合op中
			cout<<i->first<<endl;
			cnt++;
		}
	}
	if(!cnt) printf("Bing Mei You");
}

