#include<stdio.h>
int main()
{
    long long int n;
    scanf("%lld",&n);
    while(n!=0)
    {
               //long long int num=n;
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
               printf("%lld/%lld\n",num,den);
               scanf("%lld",&n);               
    }
    return 0;
}
