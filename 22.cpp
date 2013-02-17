int lis( int arr[], int n )
{
	int *lis,*arr1, i, j, max = 0,max_value=0;

	lis = (int*) malloc ( sizeof( int ) * n );
	arr1 = (int*) malloc ( sizeof( int ) * n );

	for ( i = 0; i < n; i++ )
		lis[i] =1;


	for ( i = 0; i < n; i++ )
		arr1[i]=arr[i];


	for ( i = 1; i < n; i++ )
	{
		for ( j = 0; j < i; j++ )
		{ if ( arr[i] > arr[j] && lis[i] < lis[j] + 1)
			{ lis[i] = lis[j] + 1;
				if(lis[i] > max)
				{ if (arr1[i] <(arr1[i]+arr1[j]))
					arr1[i]=arr1[i]+arr1[j];
					max=lis[i]; 
				}
			}
		} 
	} 

	for(i=1;i < n;i++)
	{ max_value=arr1[0];
		if(arr1[i] > max_value)
			max_value=arr1[i];
	}

	printf("\nThe Maximum sum is %d",max_value);
	free( lis );
	free( arr1 );

	return max;
}
