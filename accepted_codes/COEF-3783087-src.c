#include<stdio.h>
int fact(int a)
{
    if(a==0)
            return 1;
    else
            return a*fact(a-1);
}
int main()
{
    int n,k,flag=0;
    while(scanf("%d%d",&n,&k)!=EOF)
    {
          int i,a[k];                         
          for(i=0;i<k;i++){                         
               if(scanf("%d",&a[i])==EOF){
                         flag=1;                 
                         break; 
                         }   
                 //        scanf("%d",&a[i]);
          }
          long long int ans;
          ans=fact(n);
          for(i=0;i<k;i++)
          {
                  if(a[i]>1)
                            ans=ans/fact(a[i]);        
          }
          printf("%d\n",ans);
          if(flag==1)
           break;                         
    }
    return 0;
}
