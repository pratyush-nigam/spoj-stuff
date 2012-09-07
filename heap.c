#include <stdio.h>
#include <stdlib.h>

int n;
void buildheap(int a[],int num,int k)
{
	int i=k;
	a[i] = num;
	while(i>0)
	{
		int j = i/2; 
		if(a[j]>a[i])
		{
			int tmp = a[i];
			a[i]=a[j];
			a[j]=tmp;
			i=j;
		}
		else
			break;
	}
	return;
}

void findmin(int a[])
{
	int min = a[1];
	a[1] = a[n-1];
	n=n-1;
	int i = 1;
	while(i < n)
	{
		int j,k;
		j=i*2;
		k=j+1;
		if(a[k] < a[j])
			j=k;
		if(a[j] < a[i])
		{
			int tmp = a[i];
			a[i]=a[j];
			a[j]=tmp;
			i=j;
		}
		else
			break;
	}
	printf("Min = %d\n",min);	
	return;
}

int main()
{
	int i;
	scanf("%d",&n);
	int a[n+1];
	for(i=1;i<=n;i++)
	{
		int num;
		scanf("%d",&num);
		buildheap(a,num,i);
	}
	for(i=1;i<=n;i++)
		printf("%d ",a[i]);
	printf("\n");
	findmin(a);
	findmin(a);
	return 0;
}
