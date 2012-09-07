#include<stdio.h>
int gcd(int a,int b)
{
    if(b==0)
            return a;
    else
        return gcd(b,a%b);        
}
int main()
{
    int m,n;
    scanf("%d%d",&m,&n);
    while(m!=0 && n!=0)
    {
               int ans;
               ans=((m+n)/gcd(m,n) - 2 )*4;
               printf("%d\n",ans);
               scanf("%d%d",&m,&n);
    }
    return 0;
}
