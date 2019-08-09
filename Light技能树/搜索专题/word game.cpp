#include<iostream>
#include<string>
using namespace std;
int main(){
	string dict,s1[1010]; 
	while(cin>>dict){
		int n,cnt,ans=0;
		cin>>n;
		for(int i=0;i<n;i++){
			cin>>s1[i];
			cnt=0;
			for(int j=0,j1=0;j<s1[i].length();j++){
				while(s1[i][j]!=dict[j1]&&j1<dict.length()){
					j1++;	
				}
				if(j1==dict.length()){
					break;
				}
				else cnt++;	
			}
			ans=ans>cnt?ans:cnt;
		}
		cout<<ans<<endl;		
	}
	return 0;
}
