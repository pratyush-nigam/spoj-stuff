#include<stdio.h>
int main()
{
    int n,m;
    scanf("%d%d",&n,&m);
    while(n!=0 && m!=0)
    {
          char c;
          long long int a[n/2];
          int i=0,j,d=0;     
          int flag;
          while(i<n)
          {
           //         flag=1;
                    a[d]=0;
                    char s[m];
                    scanf("%s",s);
                    if(i%2==1){
                    for(j=0;j<m;j++)
                    {
                          if(isdigit(s[j]))
                          {
                                 long long int d1=s[j]-48;
                                 a[d]=a[d]*10+d1;
                        //         flag=0;                                           
                          }                                                     
                    }
                    d++;
                    }
                    
                    i++;
          }
          /*for(i=0;i<n/2;i++)
                         printf("**%lld\n",a[i]);*/
          long long int num=1,tmp,den=1;               
          for(i=(n/2)-1;i>=0;i--)
          {
                num=den*a[i]+num;
                tmp=den;
                den=num;
                num=tmp;         
                //printf("%lld %lld\n",den,num);                    
          }       
          printf("%lld %lld\n",den,num);             
          scanf("%d%d",&n,&m);     
    }
    return 0;
}
