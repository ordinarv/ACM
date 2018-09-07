#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	char a[100],b[100],c;
	cin>>a>>c>>b;
	int lena=strlen(a),lenb=strlen(b);
	int flag=1;
	for(int j=0;j<lenb;j++) 
	{
		if(a[j]!=b[j])
		{
			flag=0;
			break;
		}
	}
	if(flag) cout<<"YES";
	else	cout<<"NO";
	cout<<endl;
	return 0;
 } 
