void isprim(){  //ËØÊı´ò±í1
	f[0]=1;f[1]=1;
	for(int i=0;i<MAXN;i++){
		if(!f[i]){
			for(int j=i+i;j<MAXN;j+=i)
				f[j]=1;
		}
	}	
}


