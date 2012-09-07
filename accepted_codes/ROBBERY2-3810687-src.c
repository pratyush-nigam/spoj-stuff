#include<stdio.h>
#include<math.h>
int main()
{
    int g,f;
    scanf("%d",&f);
    for(g=0;g<f;g++)
    {
        long long int n,k,r;
        scanf("%lld%lld",&n,&k);
        r=(long long int)(((-1)+sqrtl(1+(8*n)))/(2*k));
        if(r==0)
                r=1;
        long long int i;
        long long int a[k+1],sum=0,s;
        for(i=1;i<=k && sum<n;i++)
        {
             s=n-sum;        
             a[i]=(long long int)(r*(2*i + (r-1)*k)/2);
             sum+=a[i];
             if(sum>n)
             {
                 sum=n;
                 a[i]=s;
                 break;     
             }
           //  printf("**%lld\n",a[i]);            
        }
       // printf("sum=%lld\n",sum);
        sum=n-sum;
       // printf("sum=%lld\n",sum);
        //while(sum!=0)
        for(i=1;i<=k;i++)
        {
              if(sum>(i+r*k))
              {          
                  a[i]=a[i]+(i+r*k);
                  sum=sum-(i+r*k);
              }
              else
              {
                  //printf("lol\n");
                  a[i]+=sum;
                  //printf("%lld ",a[i]);
                  break;
              }
           //   printf("%lld ",a[i]);          
        }
        i=1;
        while(i<=k)
        {
                  printf("%lld ",a[i]);
                  i++;
        }
        printf("\n");
        //printf("r=%lld\n",r);            
    }
    return 0;
}
