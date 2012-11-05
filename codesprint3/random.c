#include<stdio.h>

long long int gcd(long long int a, long long int b)
{
	if(b==0)
		return a;
	else
		return gcd(b,a%b);
}

int main()
{
	int f;
	scanf("%d",&f);
	while(f--)
	{
		long long int a,b,c;
		scanf("%lld %lld %lld",&a,&b,&c);
		if(a>b)
		{
			int tmp = a;
			a = b;
			b = tmp;
		}
	
		long long int n,d;
		if(c<=a){
			n = c*c;
			d=a*b*2;
		}
		else if(a < c && c <= b)
		{
			n = c*c-((c-a)*(c-a));
			d=a*b*2;			 
		}
		else if(c>b && c <= a+b)
		{
			n = c*c-(((c-a)*(c-a))+((c-b)*(c-b)));
			d=a*b*2;
		}
		else if(c > a+b)
		{
			n = 2;
			d = 1;
		}	
		if(n>=d)
			printf("1/1\n");
		else{
			long long int g = 1;
			g = gcd(d,n);
			printf("%lld/%lld\n",n/g,d/g);
		}
	}
	return 0;
}
