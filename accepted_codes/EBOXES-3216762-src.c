#include<stdio.h>
int main()
{
	int g,f;
	scanf("%d",&f);
	for(g=0;g<f;g++)
	{
		int sum,n,t,f,k;
		scanf("%d%d%d%d",&n,&k,&t,&f);
		sum=(f-n)/(k-1);
		printf("%d\n",sum+f);
	}
	return 0;
}
