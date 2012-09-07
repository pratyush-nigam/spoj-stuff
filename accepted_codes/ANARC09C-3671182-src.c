#include<stdio.h>
#include<math.h>
#include<stdlib.h>
typedef struct node
{
        int num;
        int pow;
}node;
int fi(int n,node a[],int d) 
{ 
       int i,count=0; 
       for(i=2;i*i <= n;i++) 
       { 
         count=0;
         if (n % i == 0){
          a[d].num=i; 
         while (n % i == 0)
         {
               count++;
                n /= i;
         } 
         a[d].pow=count;
         d++;
         }
       } 
       if (n > 1)
       {
              a[d].num=n;
              a[d].pow=1;
              d++;
       } 
       return d; 
} 
int main()
{
    int a,b;
    int g=1;
    //printf("lol");
    scanf("%d%d",&a,&b);
    while(a!=0 || b!=0)
    {
               node a1[78498],a2[78498];
               int i,j,k;
               //node c[1000000];
               int x=0,d=0;
               int d1=0,d2=0;
               d1=fi(a,a1,0);
               d2=fi(b,a2,0);
               int flag;
               d=d1+d2;
               int c1[d1],c2[d2];
               for(i=0;i<d1;i++)
                       c1[i]=0;
               for(i=0;i<d2;i++)
                       c2[i]=0;                  
               for(i=0;i<d1;i++)
               {            
                    for(j=0;j<d2;j++)
                    {                      
                          if(a1[i].num==a2[j].num)
                          {
                                 c1[i]=1;
                                 c2[j]=1;                 
                                 x=x+abs(a1[i].pow-a2[j].pow);                                       
                                 d--;
                          } 
                    }           
               }
               for(i=0;i<d1;i++)
               {
                         if(c1[i]==0)
                            x=x+a1[i].pow;       
               }
               for(i=0;i<d2;i++)
               {
                         if(c2[i]==0)
                            x=x+a2[i].pow;       
               }
                        
               printf("%d. %d:%d\n",g,d,x);
               g++;
               scanf("%d%d",&a,&b);
    }
    return 0;
}
