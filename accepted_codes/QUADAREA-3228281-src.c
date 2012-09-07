#include<stdio.h>
#include<math.h>
int main()
{
	int g,f;
	scanf("%d",&f);
	for(g=0;g<f;g++)
	{
		double s,a,b,c,d;
		scanf("%lf%lf%lf%lf",&a,&b,&c,&d);
		s=(a+b+c+d)/2;
		s=sqrt((s-a)*(s-b)*(s-c)*(s-d));
		printf("%0.2lf\n",s);
	}
	return 0;
}
