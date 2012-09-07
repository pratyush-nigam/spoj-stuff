#include<stdio.h>
#include<math.h>
//#include<cmath.h>
int main()
{
    int g,f;
    scanf("%d",&f);
    for(g=0;g<f;g++)
    {
                    const double PI = 3.141592;
                    double  n;
                    scanf("%lf",&n);
                    if(n==0.0)
                              printf("1\n");
                    else{          
                                   long long int len;
                                   len =(long long int)(((n+0.5)*log(n)- n + 0.5*log(2*M_PI))/log(10));
                                   //printf("**%lf\n",(n+0.5)*log(n));    
                                   printf("%lld\n",len+1);
                    }    
    }
    return 0;
}
