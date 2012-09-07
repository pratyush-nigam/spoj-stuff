#include<stdio.h>
#include<math.h>
#include<stdlib.h>
typedef struct node
{
        int num;
        int pow;
}node;
int size;
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
         size*=(count+1);
         a[d].pow=count;
         d++;
         }
       } 
       if (n > 1)
       {
             size*=2;
              a[d].num=n;
              a[d].pow=1;
              d++;
       } 
       return d; 
} 
int main()
{
    int a1;
    //printf("lol");
    scanf("%d",&a1);
    while(a1!=0)
    {
               size=1; 
               node a[78000];
               //int b[100000];
               int i,j,k;
               int x=0,d=0;
               d=fi(a1,a,0);
               printf("%d = ",a1);
               for(i=0;i<d;i++)
               {
                    for(j=0;j<a[i].pow;j++)
                    {
                           if(j==a[i].pow-1 && i==(d-1))
                               printf("%d",a[i].num);             
                           else
                               printf("%d * ",a[i].num);                
                    }           
               }
               printf("\n");
               if(size%2==1)
                            size++;
               printf("With %d marbles, %d different rectangles can be constructed.\n",a1,size/2);
               scanf("%d",&a1);
    }
    return 0;
}
