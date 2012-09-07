#include<stdio.h>
#include<math.h>
int main()
{
	int g,f;
	scanf("%d",&f);
	for(g=0;g<f;g++)
	{
		int n,i,j,fin,in;
		scanf("%d",&n);
		double a[n],inc,diff=360,max,min;
		char s[n][50];
		for(i=0;i<n;i++)
		{
			scanf("%s",s[i]);
			scanf("%lf",&a[i]);
		//	printf("%lf\n",a[i]);
		}
		for(i=0;i<n;i++)
		{
			min=360;
			max=-360;
			for(j=0;j<n;j++)
			{
				if(max<a[j])
				{
					max=a[j];
					fin=j;
				}
				if(min>a[j])
					min=a[j];
			}			
			inc=max-min;
			if(diff>inc)
				diff=inc;
	//	printf("\n+inc=%lf max=%lf min=%lf diff=%lf@\n",inc,max,min,diff);
			a[fin]=a[fin]-360;
			
		}
		diff = diff*12.0;
		i = ceil(diff);
		printf("%d\n",i);
		
	}
	return 0;
}
