#include <stdio.h>

int main()
{
	int n,m;
	while(scanf("%d%d",&n,&m)==2 && (n||m))
	{
		if(n>m)
			printf("0.000000\n");
		else
			printf("%0.6lf\n",(double)(m-n+1)/(double)(m+1));
	}
	return 0;
}
