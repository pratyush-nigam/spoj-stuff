	#include<stdio.h>
	#include<stdlib.h>
	 
	int C,N,K,B,T;
	int pos[200],speed[200];
	 
	int main()
	{
	    int u,i,total=0;
	//    FILE *input=fopen("chicks.in","r"),*output=fopen("chicks.out","w");
	    scanf(" %d",&C);
	    for(u=1;u<=C;u++)
	    {
	        total=0;
	        scanf(" %d %d %d %d",&N,&K,&B,&T);
	        for(i=1;i<=N;i++)
	            scanf(" %d",&pos[i]);
            for(i=1;i<=N;i++)
	            scanf(" %d",&speed[i]);
	        for(i=N;i>=1;i--)
	        {
	            if(!K) break;
	            if(speed[i]*T>=(B-pos[i])) K--;
	            else total+=K;
	        }
	        if(K) printf("Case #%d: IMPOSSIBLE\n",u);
	        else printf("Case #%d: %d\n",u,total);
	    }
	    return 0;
	}
