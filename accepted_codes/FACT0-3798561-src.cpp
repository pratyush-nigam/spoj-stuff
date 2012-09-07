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
   //printf("%I64d = ",n);
   if (!(n&1))
   {
      int np=1;
      while (n/=2, !(n&1))
         ++np;
      printf("2^%d ", np);
   }
   if (!(n%3))
   {
      int np=1;
      while (n/=3, !(n%3))
         ++np;
      printf("3^%d ", np);
   }
   long long int p=1, a=2, hi=(long long int)sqrt(n)+1;
   while (a=6-a, p+=a, p<=hi)
   {
      if (!(n%p))
      {
         int np=1;
         while (n/=p, !(n%p))
            ++np;
         printf("%lld^%d ", p, np);
      }
   }
   if (n>1)
      printf("%lld^1 ", n);
   printf("\n");

}

int main()
{
  // timer t;
   long long int n;
   scanf("%lld",&n);
   while(n!=0)
   {
     get_divisors(n);
     scanf("%lld",&n);
   }
   /*get_divisors(13091989);
   get_divisors(24329020081766);
   get_divisors(77145199750673);
*/
   return 0;

} 
