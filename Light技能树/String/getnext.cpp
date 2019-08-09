#include<iostream>
#include<cstring>
using namespace std; 
void GetNext(char* p,int next[])  
{  
    int pLen = strlen(p);  
    next[0] = -1;  
    int k = -1;  
    int j = 0;  
    while (j < pLen - 1)  
    {  
        //p[k]表示前缀，p[j]表示后缀  
        if (k == -1 || p[j] == p[k])   
        {  
            ++k;  
            ++j;  
            next[j] = k;  
        }  
        else   
        {  
            k = next[k];  
        }  
    }  
}  
int main(){
	char s[]="aaaab";
	int a[15];
	GetNext(s,a);
	for(int i=0;i<6;i++)
		cout<<a[i]<<' ';
	return 0;
}
