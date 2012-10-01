#include<stdio.h>
#include<stdlib.h>

int main()
{
	int i,n,j;
	scanf("%d",&n);
	int a[n][n];
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
			scanf("%d",&a[i][j]);
	}
	int l = n/2;
	int tmp,flag=1;
	for(k=0;k<l;k++)
	{
		i=k;
		j=i;
		flag = 1;
		while(i>=k && i<(n-k))
		{
			if(flag == 1)
			{
				while(j<(n-k))
				{
					tmp = a[i][j+1];
					a[i][j+1]=a[i][j];
					j++;
				}
			}
		}
	}
}
