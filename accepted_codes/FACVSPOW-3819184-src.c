#include<stdio.h>
#include<math.h>
int a;
long double e=2.7182818284590452353603;
long double pi=3.141592653589793238462;
long double lognfac(int n)
{
long double sum=0;
if(n==0||n==1)sum=0;
else sum=(0.5*(log(2*pi*n)))+n*log(n)-n*log(e);
return sum;
}
int main()
{
int X;
scanf("%d",&X);
while(X--)
{
scanf("%d",&a);
int low=1,high=10*a,mid;
long double store=log(a),res;
     while(1)
     {
      mid=(low+high)/2;
      if(low==high)
      break;
                         res=lognfac(mid)-mid*store;
      if(res<0)low=mid+1;
      else if(res>0) high=mid;
      else break;
     }
printf("%d\n",mid);

}
return 0;
}
