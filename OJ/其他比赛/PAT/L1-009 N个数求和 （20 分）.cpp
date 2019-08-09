#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int maxn = 1e5+5;
struct unt{
	ll x,y;
}a[maxn];
int main() {
	ll n,x,y,gcd,lcm;
	char c;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>x>>c>>y;
		gcd = __gcd(x,y);
		a[i].x = x/gcd;
		a[i].y = y/gcd;
		//cout<<a[i].x<<' '<<a[i].y<<endl;
	}
	unt ans;
	ans.x = a[0].x;ans.y = a[0].y;
	for(int i=1;i<n;i++){
		x = ans.y;y = a[i].y;
		lcm = ans.y*a[i].y / __gcd(ans.y,a[i].y);
		ans.x = ans.x*(lcm/ans.y) + a[i].x*(lcm/a[i].y);
		ans.y = lcm;
		
		gcd = __gcd(ans.x,ans.y);
		ans.x /= gcd;ans.y /= gcd; 
		/*
		//cout<<x<<' '<<y<<endl;
		ans.x *= y; ans.y *= y;
		a[i].x *=x; a[i].y *= x;
		ans.x += a[i].x; //ans.y += a[i].y;
		//cout<<ans.x<<'/'<<ans.y<<endl;
		gcd = __gcd(ans.x,ans.y);
		ans.x /= gcd;ans.y /= gcd; 
		//cout<<ans.x<<'/'<<ans.y<<endl;
		*/
	}

	if(ans.x % ans.y == 0) cout<<ans.x/ans.y<<endl;
	else if(ans.x > ans.y) cout<<ans.x/ans.y<<" "<<ans.x%ans.y<<"/"<<ans.y<<endl;
	else cout<<ans.x<<"/"<<ans.y<<endl;
	/*if(ans.x > ans.y) {
		ll z = ans.x/ans.y; ans.x%=ans.y;
		cout<<z;
		if(ans.x)
			cout<<' '<<ans.x<<'/'<<ans.y;
		cout<<endl;
	}
	else{
		if(!ans.x) cout<<0<<endl;
		else cout<<ans.x<<'/'<<ans.y<<endl;
	}*/
	return 0;
}

/*
others putout
if(a)//存在整数部分
    {  if(num1==0) printf("%d",a);//结果只有整数部分
       else printf("%d ",a);//注意结果严格控制空格
    }
    if(num1!=0)
    {
        printf("%d/%d",num1,den1);
    }
    if(num1==0&&a==0) printf("0\n");


*/
