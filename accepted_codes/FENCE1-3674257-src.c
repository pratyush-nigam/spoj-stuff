#include<stdio.h>
#include<math.h>
int main()
{
    double a;
    scanf("%lf",&a);
    while(a!=0)
    {
          double r,b;
          r=a/(2*M_PI);
          b=2*M_PI*r*r;     
          printf("%0.2lf\n",b);     
          scanf("%lf",&a);     
    }
    return 0;
}
