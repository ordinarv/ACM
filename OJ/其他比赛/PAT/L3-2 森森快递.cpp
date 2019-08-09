#include<bits/stdc++.h>

using namespace std;
typedef long long ll;
const int N = 1e5+5;
struct node
{
	int l,r;
	ll val;
	int lazy;
	ll tag;
}tree[N<<2];
 
ll dis[N];
 
struct node1
{
	int l,r;
}reg[N];
 
int n,m;
 
bool cmp(node1 a,node1 b)
{
	return a.r<b.r;
}
 
void push_up(int i)
{
	tree[i].val=min(tree[i<<1].val,tree[i<<1|1].val);
	return ;
}
 
void push_down(int i)
{
	tree[i].lazy=0;
	tree[i<<1].lazy=tree[i<<1|1].lazy=1;
	ll tag=tree[i].tag;
	tree[i].tag=0;
	tree[i<<1].tag+=tag;
	tree[i<<1|1].tag+=tag;
	tree[i<<1].val+=tag;
	tree[i<<1|1].val+=tag;
	return ;
}
 
void build(int i,int l,int r)
{
	tree[i].lazy=0;
	tree[i].tag=0;
	tree[i].l=l;  tree[i].r=r;
	tree[i].val=0;
	if(l==r)
	{
		tree[i].val=dis[l];
		return ;
	}
	
	int mid=(l+r)>>1;
	build(i<<1,l,mid);
	build(i<<1|1,mid+1,r);
	push_up(i);
	return ;
}
 
ll query(int i,int l,int r)
{
	if(tree[i].l==l&&tree[i].r==r)
	{
		return tree[i].val;
	}
	
	if(tree[i].lazy) push_down(i);
	push_up(i);
	
	int mid=(tree[i].l+tree[i].r)>>1;
	if(r<=mid)
	{
		return query(i<<1,l,r);
	}
	else if(l>mid)
	{
		return query(i<<1|1,l,r);
	}
	else
	{
		return min( query(i<<1,l,mid) ,query(i<<1|1,mid+1,r ) );
	}
}
 
void update(int i,int l,int r,int num)
{
	if(tree[i].l==l&&tree[i].r==r)
	{
		tree[i].val+=num;
		if(l!=r)
		{
			tree[i].lazy=1;
			tree[i].tag+=num;
		}
		return ;
	}
	if(tree[i].lazy) push_down(i);
	
	int mid=(tree[i].l+tree[i].r)>>1;
	if(r<=mid)
	{
		update(i<<1,l,r,num);
	}
	else if(l>mid)
	{
		update(i<<1|1,l,r,num);
	}
	else
	{
		update(i<<1,l,mid,num);
		update(i<<1|1,mid+1,r,num);
	}
	push_up(i);
	
	//printf("%d %d %d %lld \n",i,tree[i].l,tree[i].r,tree[i].val);
	
}
 
int main()
{
	cin>>n>>m;
	for(int i=1;i<n;i++) scanf("%lld",&dis[i]);
	build(1,1,n-1);
	
	for(int i=0;i<m;i++)
	{
		cin>>reg[i].l>>reg[i].r;
		if(reg[i].l>reg[i].r) swap(reg[i].l,reg[i].r);
	}
	
	sort(reg,reg+m,cmp);
	/*
	for(int i=0;i<m;i++) cout<<reg[i].l<<" "<<reg[i].r<<endl;
	*/
	ll ans=0;
	for(int i=0;i<m;i++)
	{
		ll num=query(1,reg[i].l+1,reg[i].r);
		
		//printf(" %d %d  num : %lld\n",reg[i].l+1,reg[i].r,num);
		
		if(num>0){
			ans+=num;
			update(1,reg[i].l+1,reg[i].r,-num);
		}
	}
	cout<<ans<<endl;
	return 0;
}

