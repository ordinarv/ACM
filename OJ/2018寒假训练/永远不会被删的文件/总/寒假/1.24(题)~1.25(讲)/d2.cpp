#include<stdio.h>
const int MAXN=1e5+5;
int f[MAXN];
void isprim(){  //ËØÊı´ò±í
	f[0]=1;f[1]=1;
	for(int i=0;i<MAXN;i++){
		if(!f[i]){
			for(int j=i+i;j<MAXN;j+=i)
				f[j]=1;
		}
	}	
}
int main(void)
{
	int n;
	isprim();
	for(int i=0;i<1000;i++)
	{
		if(!f[i])
		printf("%d ",i);
		
		
	}		
		
		
	
	
	return 0;
}

