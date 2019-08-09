int mix[max][max];//邻接矩阵存储相应的边的权重

void prim(int n,int r)//prim算法实现
{
	
	int a[max];//a[max]用来存放各个点到已经标记点的集合的最短距离
	bool vis[max];//vis[max]用来记录每个点的标记状态，false表示还没标记。
	int i,j,k,min;
	
	for (i=0; i<n; i++)//初始化从根节点开始
	{
		a[i]=mix[r][i];
		vis[i]=false;
	}
	vis[r]=true;
	printf("/n依次被标记的点及相应边的权重：/n");
	printf("%d/t%d/n",r,0);
	for (i=0; i<n-1; i++) //还剩n-1个点
	{
		k=0;
		min=wq;
		for (j=0; j<n; j++)
		{
			//第j个点到已经标记点的集合的距离最小且这个点还没有被标记
			//k记录下一个将被标记的点
			if (a[j]<min&&vis[j]==false)
			{
				min=a[j];
				k=j;
			}
		}
		vis[k]=true;//标记节点k
		printf("%d/t%d/n",k,min);
		//更新a[]里的状态，时刻保持最新的状态
		//存放各个点到已经标记点的集合的最短距离
		for (j=0; j<n; j++)
		{
			if (mix[k][j]<a[j])
			{
				a[j]=mix[k][j];
			}
		}
	}
}
