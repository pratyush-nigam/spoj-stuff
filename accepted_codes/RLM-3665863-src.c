#include<stdio.h>
#include<math.h>
#include<string.h>
int main()
{
    char num1[100],num2[100];
    char c;
    //int g=0,f;//
    //scanf("%d",&f);//
    //while(g<f)//
    while(scanf("%s %c %s",num1,&c,num2)!=EOF)
    {
      //                scanf("%lld %c %lld",&num1,&c,&num2);//
                      char nu1[100],nu2[100];
                      strcpy(nu1,num1);
                      strcpy(nu2,num2);
                      int d1=strlen(num1), d2=strlen(num2);
                      int s1[d1],s2[d2], k=d1-1;
                      while(k>=0)
                      {
                                 s1[k]=num1[k]-48;
                                 //num1/=10;
                                 k--;
                      }
                      k=d2-1;
                      while(k>=0)
                      {
                                 s2[k]=num2[k]-48;
                                 //num2/=10;
                                 k--;
                      }
                      long long int n1=0,n2=0;
                      int i;
                      for(i=0;i<d1;i+=2)
                      {
                             for(k=0;k<s1[i];k++)
                             {
                                   n1=n1*10+s1[i+1];              
                             }           
                      }
                      for(i=0;i<d2;i+=2)
                      {
                             for(k=0;k<s2[i];k++)
                             {
                                   n2=n2*10+s2[i+1];              
                             }           
                      }
                      //printf("** %lld %lld\n",n1,n2);
                      long long int res;
                      if(c=='+')
                               res=n1+n2;
                      if(c=='-')
                               res=n1-n2;
                      if(c=='*')
                               res=n1*n2;
                      if(c=='/')
                               res=n1/n2;
                      int count=(int)(log10(res)+1);
                      long long int res1=res;
                      int r[count];
                      i=count-1;
                      while(res>0)
                      {
                                 r[i]= res%10;
                                 res/=10;
                                 i--;
                                 //printf("*%d",r[i+1]);
                      }
                      i=0;
                      printf("%s %c %s = ",nu1,c,nu2);
                      if(res1!=0)
                      while(i<count)
                      {
                                    int start=r[i];
                                    int d=0;
                                    while(r[i]==start && i<count)
                                    {
                                               d++;
                                               i++;
                                               if(d==9)
                                                       break;
                                    }
                                    //printf("i=%d\n",i);
                                    printf("%d%d",d,start);
                      }
                      else
                          printf("10");
                      printf("\n");
                      //g++;
    } 
    return 0;
}
