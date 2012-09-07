#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <memory.h>
#include <string.h>
#include <time.h>

//typedef __int64 int64;
/*struct timer
{
   clock_t t;
   timer() { t = clock(); }
   ~timer() { printf("runtime %.3f secs\n", getTime()); }
   double getTime() { return
((double)clock()-(double)t)/(double)CLOCKS_PER_SEC; }

};
*/
void get_divisors(long long int n)
{
   int num=(int)n;
    //printf("%I64d = ",n);
   int pr=1;
   if (!(n&1))
   {
      int np=1;
      while (n/=2, !(n&1))
         ++np;
      pr*=(int)(pow(2,np+1)-1);
   }
   if (!(n%3))
   {
      int np=1;
      while (n/=3, !(n%3))
         ++np;
      pr*=(int)((pow(3,np+1)-1)/2);   
      //printf("3^%d ", np);
   }
   long long int p=1, a=2, hi=(long long int)sqrt(n)+1;
   while (a=6-a, p+=a, p<=hi)
   {
      if (!(n%p))
      {
         int np=1;
         while (n/=p, !(n%p))
            ++np;
         pr*=(int)((pow(p,np+1)-1)/(p-1));   
         //printf("%lld^%d ", p, np);
      }
   }
   if (n>1)
      pr*=(int)((n*n)-1)/(n-1);
      //printf("%lld^1 ", n);
   printf("%d\n",pr-num);

}

int main()
{
  // timer t;
   int g=0,f;
   scanf("%d",&f);
   while(g<f)
   {
     long long int n;        
     scanf("%lld",&n); 
     if(n==1)
             printf("0\n");
     else               
     get_divisors(n);
     g++;
   }
   /*get_divisors(13091989);
   get_divisors(24329020081766);
   get_divisors(77145199750673);
*/
   return 0;

} 
