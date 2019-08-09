    struct Edge{  
        int u,v,cost;  
    };  
    int pre[maxn];  
    Edge e[maxv];  
    void init(int g){  
        for(int i=0;i<=g;i++){  
            pre[i] = i;  
        }  
    }  
    int Find(int x){  
        int r = x;  
        while(r!=pre[r])  
            r = pre[r];  
        int j=x;  
        //路径压缩  
        while(j!=pre[j]){  
            int z = j;  
            j = pre[z];  
            pre[z] = r;  
        }  
        return r;  
    }  
    void mix(int _x,int _y){  
        int x = Find(_x),y = Find(_y);  
        //按照大小顺序进行合并  
        if(x>y)  
            pre[x] = y;  
        else  
            pre[y] = x;  
    }  
    int cmp(Edge x,Edge y){  
        return x.cost<y.cost;  
    }  
    int Kurskal(){  
        sort(e,e+m,cmp);  
        int cnt = 0;  
        int sum = 0;  
        for(int i=0;i<m;i++){  
            int x = Find(e[i].u), y = Find(e[i].v);  
            if(x!=y)  
                mix(x,y),cnt++,sum+=e[i].cost;  
            if(cnt==n-1)  
                break;  
        }  
        return sum;  
    }  
