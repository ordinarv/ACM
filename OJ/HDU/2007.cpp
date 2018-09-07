#include<iostream>

using namespace std;
int main()
{
	int x,y,w;
	while(cin>>x>>y)
	{
		if(x>y)
		{
			w=x;x=y;y=w;
		}
		int sumj=0,sumo=0;
		for(int i=x;i<=y;i++)
		{
			if(i%2==0)
				sumj+=i*i;
			else 
				sumo+=i*i*i;			
		}
		cout<<sumj<<' '<<sumo<<endl;		
	}	
	return 0;
}
