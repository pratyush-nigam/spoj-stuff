#include<stdio.h>
int main()
{
	int g,f;
	scanf("%d",&f);
	for(g=0;g<f;g++)
	{
		int n,m;
		scanf("%d%d",&n,&m);
		if(n==m)
		{
			if(m%2==0)
				printf("L\n");
			else
				printf("R\n");
		}
		else if(n>m)
		{
			if(m%2==0)
				printf("U\n");
			else
				printf("D\n");
		}
		else if(m>n)
		{
			if(n%2==0)
				printf("L\n");
			else
				printf("R\n");
		}
	}
	return 0;
}
