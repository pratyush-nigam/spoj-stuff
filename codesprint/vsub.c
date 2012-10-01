#include<stdio.h>
#include<stdlib.h>
int lis( int* a, int N ,int *a1) {
   int *best, *prev, *b, *p ,i, j, max = 0;
   best = (int*) malloc ( sizeof( int ) * N );
   prev = (int*) malloc ( sizeof( int ) * N );
   b = (int*) malloc ( sizeof( int ) * N );
   p = (int*) malloc ( sizeof( int ) * N );
 
   for ( i = 0; i < N; i++ ){
	 best[i] = 1;
	 prev[i] = i;
	 b[i]=1;
	 p[i] = i;
   }
 
   for ( i = 1; i < N; i++ )
      for ( j = 0; j < i; j++ ){
         if ( a[i] > a[j] && best[i] < best[j] + 1 )
	{
            best[i] = best[j] + 1;
	 prev[i] = j; 
	}
         if ( a1[i] > a1[j] && b[i] < b[j] + 1 )
         {
	   b[i] = b[j] + 1;
	 p[i] = j; 
	}
	}
	int m=0;
	for(i=0;i<N;i++)
	{
		if(best[i]+b[N-i-1] > m && best[i]>1 && b[N-i-1]>1)
		{
			m = b[N-i-1] + best[i];
			//printf("%d %d\n",b[i],c[i]);
		}
	}
   free( prev );
   free(p);
   if(m > 0)
      return m-1;
    else
	return 0;
}
int main()
{
	int n;
	scanf("%d",&n);
	int a[n],i,d[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		d[n-i-1] = a[i];
	}
	int max=0;
	max = lis(a,n,d);
	printf("%d\n",max);
	return 0;
}
