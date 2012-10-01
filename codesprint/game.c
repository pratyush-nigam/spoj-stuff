#include<stdio.h>
#include<stdlib.h>
int main()
{
	double p;
	scanf("%lf",&p);
	int j,m;
	scanf("%d",&m);
	int n = 1000000;
		double a[n+1];
       		a[1]=p;
        	int i;
        	for(i=2;i<=n;i++)
        	{
                	a[i] = (1-p)*a[i-1] + p*(1-a[i-1]);
        	}
	for(j=0;j<m;j++)
	{
		scanf("%d",&n);
        	printf("%.4lf\n",a[n]);
	}
	return 0;
}
