#include<stdio.h>
int main()
{
int g,f;
scanf("%d",&f);
for(g=1;g<=f;g++)
{
        int a[2],n,flag=0;
        scanf("%d%d",&a[0],&a[1]);
        n=a[1];
        int s[n],j,i,sum=0,tmp;
        for(i=0;i<n;i++)
                scanf("%d",&s[i]);
        for(i=0;i<(n-1);i++)
        {   
                for(j=i+1;j<n;j++)
                {   
                        if(s[i]<s[j])
                        {   
                                tmp=s[j];
                                s[j]=s[i];
                                s[i]=tmp;
                        }    
                }    
        }   
        i=0;
        while(i<n)
        {   
	        sum+=s[i];
		i++;
		if(sum>=a[0])
		{
			//if(sum==a[0])
			//	i--;
			flag=1;
			break;
		}
                    
        }   
	if(flag==1)
        printf("Scenario #%d:\n%d\n",g,i);
	else
	printf("Scenario #%d:\nimpossible\n",g);
 }
       return 0;
}

