#include<stdio.h>
#include<math.h>
int main()
{
    int g,f;
    scanf("%d",&f);
    for(g=0;g<f;g++)
    {
        double d,e,f;
        scanf("%lf%lf%lf",&d,&e,&f);
        double a,s;
        s=(d+e+f)/2;
        a=s*(s-d)*(s-e)*(s-f);
        a=sqrt(a);
        double b,ans;
        b=sqrt(3);
        
        ans=(((d*d*b)/4)+((e*e*b)/4)+((f*f*b)/4)+(3*a))/2;
        printf("%0.2lf\n",ans);            
    }
    return 0;   
}
