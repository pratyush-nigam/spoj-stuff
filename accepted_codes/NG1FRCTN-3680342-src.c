#include<stdio.h>
long long int nume(long long int n)
{
    long long int a[50];
               long long int d=0,i;
               while(n!=1)
               {
                         a[d]=n;
                         n=n/2;
                         //printf("%lld ",a[d]);
                         d++; 
               }
      //         printf("\n");
               i=d-1;
               
               long long int num=1,den=1;
               while(i>=0)
               {
                      if(a[i]%2==0)
                                   den=num+den;   
                      else
                                   num=num+den;
                      i--;
               }
//               printf("%lld/%lld\n",num,den);
    return num;
}
long long int deno(long long int n)
{
    long long int a[50];
               long long int d=0,i;
               while(n!=1)
               {
                         a[d]=n;
                         n=n/2;
                         //printf("%lld ",a[d]);
                         d++; 
               }
      //         printf("\n");
               i=d-1;
               
               long long int num=1,den=1;
               while(i>=0)
               {
                      if(a[i]%2==0)
                                   den=num+den;   
                      else
                                   num=num+den;
                      i--;
               }
  //             printf("%lld/%lld\n",num,den);
    return den;
}
int gcd(int a,int b)
{
    if(b==0)
            return a;
    else
        return gcd(b,a%b);        
}
int main()
{
    long long int a1,b;
    scanf("%lld%lld",&a1,&b);
    while(a1!=0 && b!=0)
    {
               long long int num1,den1;
               num1=nume(a1);
               den1=deno(b);
               int g=1;
               g=gcd(num1,den1);                   
               printf("%lld/%lld\n",num1/g,den1/g);
               scanf("%lld%lld",&a1,&b);               
    }
    return 0;
}
