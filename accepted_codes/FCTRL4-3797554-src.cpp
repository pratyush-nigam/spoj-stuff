#include <stdio.h>
#include <string.h>
#define MAXN 1000
 
long a[MAXN], l;
 
void a_div_5(void)
{
   int i, plus;
 
   plus = 0;
   for (i=0; i<l; i++) {
      a[i] = a[i]*2+plus;
      plus = a[i]/10;
      a[i] = a[i]%10;
   }
   if (plus>0) a[l++] = plus;
   l--;
   for (i=0; i<l; i++) a[i] = a[i+1];
}
 
int main(void)
{
   char buffer[MAXN];
   long mod[20]={1,1,2,1,4,2,2,4,2,3,4,4,3,4,1,3,3,1,3,2};
   int result, n, i, plus, j, one;
   //FILE *f, *g;
 
   //f = stdin;
   //g = stdout;
 
   while ( scanf("%s", buffer) != EOF) {
      l = strlen(buffer);
 
      for (i=0; i<l; i++) a[i] = buffer[l-1-i] - '0';
      one = l==1 && a[0]==1;
 
      result = 1;
      while (l>0) {
         if (l==1) result = result * mod[a[0]] % 5;
         else      result = result * mod[a[0] + 10*(a[1]%2) ] % 5;
         a_div_5();
      }
 
      if (one || result%2==0) printf("%d\n", result);
      else printf("%d\n", result+5);
 
   }
   return 0;
}
