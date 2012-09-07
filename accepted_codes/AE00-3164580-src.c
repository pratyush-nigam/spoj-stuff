#include<stdio.h>
int main()
{
	int n,sum=1,i,j,count=1,d;
	double g;
	scanf("%d",&n);
	for(i=2;i<=n;i++)
	{
		for(j=2;j*j<=i;j++)
		{
			if(i%j==0)
			{
				count++;
			}			
		}
		sum+=count;
		//printf("%d\n",count);
		count=1;			
	}
	printf("%d\n",sum);
	return 0;
}
