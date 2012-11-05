#include<cstdio>
#include<algorithm>
using namespace std;

int maxSumIS( int arr[], int n ,int m)
{
	int *msis, i, j, max = 0;
	msis = (int*) malloc ( sizeof( int ) * n );

	/* Initialize msis values for all indexes */
	for ( i = 0; i < n; i++ )
		msis[i] = arr[i];

	/* Compute maximum sum values in bottom up manner */
	for ( i = 1; i < n; i++ )
		for ( j = 0; j < i; j++ )
			if ( arr[i] > arr[j] && msis[i] < msis[j] + arr[i])
				msis[i] = msis[j] + arr[i];

	/* Pick maximum of all msis values */
	for ( i = 0; i < n; i++ )
		if ( max < msis[i] && msis[i]<=m)
			max = msis[i];

	/* Free memory to avoid memory leak */
	free( msis );

	return max;
}
int main()
{
	int n,m;
	scanf("%d%d",&n,&m);
	int i,a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("%d\n",maxSumIS(a,n,m));
	return 0;
}
