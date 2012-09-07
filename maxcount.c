#include <stdio.h>
#include <stdlib.h>

int main()
{
	int t;
	scanf("%d",&t);
	while(t>0)
	{
		int n,i,max=-1,val=0;
		scanf("%d",&n);
		int a,c[10001]={0};
		for(i=0;i<n;i++)
		{
			scanf("%d",&a);
			if(c[a]==0)
				c[a] = 1;
			else if(c[a]>0)
				c[a] = c[a] + 1;
			
			if(c[a]>max)
			{
				max = c[a];
				val = a;
			}
			if(c[a]==max && val>a)
				val = a;
			
		}
		printf("%d %d\n",val,max);
		t--;
	}
	return 0;
}
