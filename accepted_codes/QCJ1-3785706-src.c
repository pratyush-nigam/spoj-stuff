#include<stdio.h>
#include<string.h>
int main()
{
    int n,i=0,j;
    char s[200],c;
    scanf("%d",&n);
    gets(s);
    gets(s);
    char a[n][200];
    while(i<n)//change this to gets()
    {
         j=0;              
         //scanf("%c",&c);              
         while(scanf("%c",&c)!=EOF && c!='\n')
         {
             a[i][j]=c;
             j++;              
         }       
         a[i][j]='\0';       
         //strcpy(a[i],s);
        // printf("%s\n",a[i]);
         i++;         
    }
    int total=0,max=0;
    for(i=0;i<n;i++)
    {
         for(j=0;j<strlen(a[i]);j++)
         {
                 if(a[i][j]!=' ') 
                     total++;                  
         }           
         if(max<strlen(a[i]))
                     max=strlen(a[i]);        
    }
    for(i=0;i<n;i++)
    {
         for(j=strlen(a[i]);j<max;j++)
              a[i][j]=' ';           
    }
    printf("Total Walk Distance = %d\n",total);
    char prev;
    int count=0,flag=0;
    for(j=0;j<max;j++)
    {
          for(i=0;i<n;i++)
          {
               if(a[i][j]!=' ')
               {
    //                   printf("%c i=%d j=%d\n",a[i][j],i,j);
                       if(flag==0)
                       {
                             count=1;
                             flag=1;
                             prev=a[i][j];     
                       }     
                       else
                       { 
                         if(a[i][j]==prev)                         
                               count++;                   
                         else
                         {
                             //int t=(int)prev;
                             if(prev == '/')
                                          printf("Up %d steps\n",count);
                             else if(prev == '_')
                                          printf("Walk %d steps\n",count);           
                             else //change this
                                          printf("Down %d steps\n",count); 
                                                           
                             count=1;             
                             prev=a[i][j];             
                         }
                       }      
               }           
          }                     
    }
    if(prev == '/')
                printf("Up %d steps\n",count);
    else if(prev == '_')
                printf("Walk %d steps\n",count);           
    else //change this
                printf("Down %d steps\n",count);
    //scanf("%d",&count);
    return 0;
}
