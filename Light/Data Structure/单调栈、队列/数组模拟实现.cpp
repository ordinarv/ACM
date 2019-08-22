/*
单调栈、单调队列数组模拟 
*/
#include<bits/stdc++.h>
using namespace std;
const int maxn = 1e5+5;
int Stack[maxn];//存储位置 
int top=-1;
int a[] = {2,2,1,2,2,0};
int n = 6;
int work() {
        int res = 0;
        vector<int> height;
        stack<int> st;
        for(int i=0;i<n;i++)
        	height.push_back(a[i]);
        height.push_back(0);
        for (int i = 0; i < height.size(); ++i) {
            if (st.empty() || height[st.top()] < height[i]) {
                st.push(i);
            } else {
                int cur = st.top(); st.pop();
                cout<<'i'<<i<<endl;
                res = max(res, height[cur] * (st.empty() ? i : (i - st.top() - 1)));
                
                cout<<"res"<<res<<endl;
                --i;
            }     
            
        }
        return res;
    }
int main(){
	int ans = 0;
	for(int i=0;i<n;i++){
		if(top < 0 || a[Stack[top]] <= a[i]) Stack[++top] = i;
		else {
			ans = max(ans,(i-Stack[top])*a[Stack[top]]);
			//cout<<i<<' '<<ans<<endl;
			top--;
			i--;
		}
	}
	//cout<<ans<<endl;
	cout<<"work"<<work()<<endl;
	return 0;
}
