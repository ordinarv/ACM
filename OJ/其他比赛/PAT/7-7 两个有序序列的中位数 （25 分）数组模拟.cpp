#include<iostream>
#include<cmath>
#include<string>
#include<cstring>
#include<algorithm>
#include<vector>
#include<set>
#include<map>
#include<numeric>
using namespace::std;
int a[100005], b[100005];	//version2 chainlist  25/25
int DealWith(int n)
{
	int ai = 0, bi = 0;
	int i, j;
	int m = (2*n+1)/2;
	while(ai + bi < m - 1)
	{
		if(a[ai] >= b[bi])
			bi++;
		else
			ai++;
	}
	return a[ai]>b[bi]?b[bi]:a[ai];
}
int main()
{
	int n;
	scanf("%d",&n);
	int i;
	for(i = 0; i < n; ++i)
		scanf("%d", &a[i]);
	for(i = 0; i < n; ++i)
		scanf("%d", &b[i]);
	printf("%d\n", DealWith(n));    
	return 0;
}

