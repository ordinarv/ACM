## [SPOJ 3267](http://www.spoj.com/problems/DQUERY/)D-query

题意：给你一段区间，q个询问，询问区间[l,r]有多少个不同的数字
思路： 这道题算是很有意思的一道数据结构题了。。解法很多：莫队，主席树，离线树状数组都可以。解法也不难。

莫队解法：
思路：这道题感觉就是直接莫队莽上就完事了，没有什么需要处理的，就维护下每个元素在当前区间出现的次数就好了。
实现代码：

```c++
#include<bits/stdc++.h>
using namespace std;

const int M = 1e6 + 10;
int a[M],num[M],vis[M],block,ans = 0,n,m;
struct node{
    int l,r,id;
    bool operator < (const node &cmp) const{
         if(l/block == cmp.l/block)  return r < cmp.r;
         return l/block < cmp.l/block;
    }
}q[M];

void add(int x){
    vis[a[x]]++;
    if(vis[a[x]] == 1) ans++;
}

void del(int x){
    vis[a[x]]--;
    if(vis[a[x]] == 0) ans--;
}

int main()
{
    scanf("%d",&n);
    block = sqrt(n);
    for(int i = 1;i <= n;i ++){
        scanf("%d",&a[i]);
    }
    scanf("%d",&m);
    for(int i = 1;i <= m;i ++){
        scanf("%d%d",&q[i].l,&q[i].r);
        q[i].id = i;
    }
    sort(q+1,q+m+1);
    int l = 1,r = 0;
    for(int i = 1;i <= m;i ++){
        while(l < q[i].l) del(l),l++;
        while(l > q[i].l) l--,add(l);
        while(r < q[i].r) r++,add(r);
        while(r > q[i].r) del(r),r--;
        num[q[i].id] = ans;
    }
    for(int i = 1;i <= m;i ++)
        printf("%d\n",num[i]);
    return 0;

}
```

主席树解法：

我们将元素在序列中的地址建成主席树，如果这个元素没有出现过，那么就在这个位置上+1，如果这个元素出现过那就将这个元素上一次出现的位置-1，在当前位置+1；每棵线段树维护的都是1到当前

位置的不同元素的个数。

实现代码：

```
#include<bits/stdc++.h>
using namespace std;

const int M = 3e4+10;
const int Max = 1e6+10;
int rs[M*20],ls[M*20],sum[M*20],root[M*20];
int a[M],idx;
int vis[Max],ret;

void update(int old,int &k,int l,int r,int p,int c){
    k = ++idx;
    ls[k] = ls[old]; rs[k] = rs[old]; sum[k] = sum[old] + c;
    if(l == r) return ;
    int mid = (l + r) >> 1;
    if(p <= mid) update(ls[old],ls[k],l,mid,p,c);
    else update(rs[old],rs[k],mid+1,r,p,c);
}

void query(int k,int l,int r,int p){
    if(p == l){
        ret += sum[k];
        return ;
    }
    int mid = (l + r) >> 1;
    if(p <= mid) ret += sum[rs[k]],query(ls[k],l,mid,p);
    else query(rs[k],mid+1,r,p);
    return ;
}

int main()
{
    int n,q;
    scanf("%d",&n);
    idx = 0;
    for(int i = 1;i <= n;i ++) scanf("%d", &a[i]);
    memset(vis,0,sizeof(vis));
    for(int i = 1;i <= n;i ++){
        int tmp = 0;
        if(!vis[a[i]]) update(root[i-1],root[i],1,n,i,1);
        else {
            update(root[i-1],tmp,1,n,vis[a[i]],-1);
            update(tmp,root[i],1,n,i,1);
        }
        vis[a[i]] = i;
    }
    scanf("%d",&q);
    while(q--){
        int l,r;
        scanf("%d %d",&l,&r);
        ret = 0;
        query(root[r],1,n,l);
        printf("%d\n",ret);
    }
    return 0;
}
```

离线+树状数组

先离线下，对询问的r排序，以元素的下标作树状数组维护以r为右边界的区间不同元素的数量，遍历时如果当前元素没有出现，那么存在他的地址，并在树状数组对应下标+1，如果这个元素

之前已经出现过了，那么取消之前标记的点也就是将这个元素上一次出现的下标在树状数组中-1，变成0，然后再储存下当前元素最迟出现的下标，也就是当前点。

最后区间[l,r]之间不同的数量也就是sumR - sumL;

实现代码：

```
#include<bits/stdc++.h>
using namespace std;

const int Max = 1e6+10;
int c[Max],a[Max],n,m,ans[Max],mp[Max];
int lowbit(int x){
    return x&(-x);
}

int getsum(int x){
    int sum = 0;
    while(x>0){
        sum += c[x];
        x -= lowbit(x);
    }
    return sum;
}

void add(int x,int value){
    while(x<=n){
        c[x] += value;
        x += lowbit(x);
    }
}

struct node{
    int l,r,id;
    bool operator < (const node &cmp) const {
        return r < cmp.r;
    }
}q[Max];

int main()
{
    scanf("%d",&n);
    memset(mp,-1,sizeof(mp));
    for(int i = 1; i <= n;i ++)  scanf("%d",&a[i]);
    scanf("%d",&m);
    for(int i = 1;i <= m;i ++){
        scanf("%d%d",&q[i].l,&q[i].r);
        q[i].id = i;
    }
    sort(q+1,q+m+1);
    int l = 1;
    for(int i = 1;i <= m;i ++){
        for(int j = l;j <= q[i].r;j ++){
            if(mp[a[j]]!=-1){
                add(mp[a[j]],-1);
            }
            add(j,1);
            mp[a[j]] = j;
        }
        l = q[i].r + 1;
        ans[q[i].id] = getsum(q[i].r) - getsum(q[i].l-1);
    }

    for(int i = 1;i <= m;i ++){
        printf("%d\n",ans[i]);
    }
    return 0;
}
```

