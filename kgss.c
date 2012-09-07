#include<stdio.h>
int main()
{
    int n,i,f;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
             scanf("%d",&a[i]);
    scanf("%d\n",&f);
    while(f>0)
    {
         char ch,s[50];
         int x=0,y=0,max1,max2,flag=0,num = 0;
         //scanf("%c %d %d\n",&ch,&x,&y);
	 gets(s);
	 //printf("%s\n",s);
	 i =0;
	 while(s[i]!='\0')
	 {
		if(isalpha(s[i])){
			ch = s[i];
			i++;
		}
		else if(isdigit(s[i]))
		{
			int t = 0;
			num = 0;
			while(isdigit(s[i+t]))
			{
				num = num*10 + (s[i+t] - '0');
				t++;
			}
			if(flag == 0)
			{
				flag =1;
				x = num;
			}
			else
				y = num;
			i = i+t;
		}
		else
			i++;
	 }
         //printf("%d. %c %d %d\n",f,ch,x,y);
         int j,k;
         if(ch=='Q')
         {
              max1=-1;
              max2=-2;
              for(i=x-1;i<y;i++)
              {
                              
                     if(a[i]>max1)
                     {
                          max2=max1;
                          j=k;
                          k=i;
                          max1=a[i];        
                     }
                     else if(a[i]>max2)
                     {
                          max2=a[i];
                          j=i;
                     }    
                    // printf("%d %d\n",k,j);
              }     
              printf("%d\n",max1+max2);
         }
         else if(ch=='U')
              a[x-1]=y;
	f--;
    }       
    return 0;
}
