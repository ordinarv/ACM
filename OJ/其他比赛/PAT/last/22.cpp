#include <stdio.h>
 
int main ()
{
  int x,y,n;
  scanf("%d",&n);
  int m=0;
  for(x=1;x<=100;x++)
  {
	  for(y=x;y<=100;y++)
	  {
		  if(x*x+y*y==n)
		  {
			  m=1;
			  printf("%d %d\n",x,y);
		  }
	  }
  }
  if(m==0)
  {
	  printf("No Solution");
  }
return 0;
}
