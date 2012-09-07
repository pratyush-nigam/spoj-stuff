#include<stdio.h>
#include<stdlib.h>
int main()
{
	int g,f;
	scanf("%d",&f);
	for(g=0;g<f;g++)
	{
		long long int a,b,c;
		scanf("%lld%lld%lld",&a,&b,&c);
		printf("%lld\n",(a*a)-(2*b));
	}
	return 0;
}
