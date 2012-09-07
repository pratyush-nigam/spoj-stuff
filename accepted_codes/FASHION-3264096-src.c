#include<stdio.h>
void swap(int *x,int *y)
{
	int temp;
	temp = *x;
	*x = *y;
	*y = temp;
}
int choose_pivot(int i,int j )
{
	return((i+j) /2);
}
void quicksort(int list[],int m,int n)
{
	int key,i,j,k;
	if( m < n)
	{
		k = choose_pivot(m,n);
		swap(&list[m],&list[k]);
		key = list[m];
		i = m+1;
		j = n;
		while(i <= j)
		{
			while((i <= n) && (list[i] <= key))
				i++;
			while((j >= m) && (list[j] > key))
				j--;
			if( i < j)
				swap(&list[i],&list[j]);

	}
	swap(&list[m],&list[j]);
	quicksort(list,m,j-1);
	quicksort(list,j+1,n);
	}
}
int main()
{
	int g,f;
	scanf("%d",&f);
	for(g=0;g<f;g++)
	{
		int n,i,sum=0;
		scanf("%d",&n);
		int a[n],b[n];
		for(i=0;i<n;i++)
			scanf("%d",&a[i]);
		for(i=0;i<n;i++)
			scanf("%d",&b[i]);
		quicksort(a,0,n-1);
		quicksort(b,0,n-1);
		for(i=n-1;i>=0;i--)
		{
			//printf("%d %d\n",a[i],b[i]);
			sum+=(a[i]*b[i]);
		}
		printf("%d\n",sum);
	}
	return 0;
}
