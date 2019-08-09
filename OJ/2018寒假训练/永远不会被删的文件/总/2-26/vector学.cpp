#include<iostream>
#include<vector>
using namespace std;
int main()
{
	vector<int> a;
	a.push_back(1);
	a.push_back(2);
	int begin=a.begin();
	int end=a.end();
	int size=a.size();
	int i=a.empty();
	cout<<"begin1="<<begin<<"end="<<end<<"size="<<size<<endl<<i;
	if(a.empty()) cout<<"66s"<<endl; 
	
	
	
	
	
	/*
	
	
	
	
	c.begin(),
	c.end(),
	c.back(),
	
	
	push_pack()weibu add;
	delete erase(),pop_back()weibu,clear()all;*/
	return 0;
	
}





