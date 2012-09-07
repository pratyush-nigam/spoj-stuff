#include<stdio.h>
int main()
{
	long long int n,m,i;
	//printf("a");
	scanf("%lld %lld",&n,&m);
	while(n!=(-1) && m!=(-1))
	{
		long long int a[n];
		long long int time = 0,sum=0;
		for(i=0;i<n;i++)
		{
			scanf("%lld",&a[i]);
			sum+=a[i];
			time = time + (sum*m);
		}
		printf("%lld\n",time);
		scanf("%lld %lld",&n,&m);
	}
	return 0;
}
