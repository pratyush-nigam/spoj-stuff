#include<stdio.h>
#include<string.h>
typedef struct node
{
        int w;
        char t[1000];
}node;
int main()
{
    int g,f;
    scanf("%d",&f);
    for(g=0;g<f;g++)
    {
           node r[1000];
           int g1,g2,i,n=16,k=0,j,flag=0;
           for(i=0;i<n;i++)//change this
           {
                  char a[1000],b[1000];                  
                  scanf("%s",a);
                  scanf("%s",b);
                  flag=0;
             //     printf("%s %s\n",a,b);
                  scanf("%d %d",&g1,&g2);
                  if(g1>g2)
                  {
                        for(j=k-1;j>=0;j--)
                        {
                                 if(strcmp(a,r[j].t)==0)
                                 {
                                        flag=1;
                                        break;              
                                 }                                                              
                        }
                        if(flag==1)
                        {   
                              r[j].w++;
                        }
                        else
                        {
                            strcpy(r[k].t,a);
                            r[k].w=1;                            
                            k++;
                        }
                  }
                  else
                  {
                      for(j=k-1;j>=0;j--)
                        {
                                 if(strcmp(b,r[j].t)==0)
                                 {
                                        flag=1;
                                        break;              
                                 }                                                              
                        }
                        if(flag==1)
                        {   
                              r[j].w++;
                        }
                        else
                        {
                            strcpy(r[k].t,b);
                            r[k].w=1;
                            k++;
                        }
                  }
                  
                  //printf("%s\n",t[k-1]);          
           }         
           //for(i=0;i<k;i++){//change this
             // printf("%s %d %d\n",t[i],i,strlen(t[i]));  
           for(i=0;i<k;i++)
           {
                     if(r[i].w==4)
                     {
                             printf("%s\n",r[i].t);
                             break;      
                     }                                    
           }
           //printf("%s\n",r[ind].t);
    }
    return 0;
}
