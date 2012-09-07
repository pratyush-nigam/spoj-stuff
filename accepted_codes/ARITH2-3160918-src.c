#include<stdio.h>
int main()
{
	int g,f;
	scanf("%d",&f);
	for(g=0;g<f;g++)
	{
		long long int i=0,j=0,sum=0;
		char s[1000000],c;
		int k=1;
		scanf("\n%c",&c);
		while(c!='\n')
		{
			if(c!=' ')
			{
				s[i]=c;
		//		printf("%c",s[i]);
				i++;
			}
			scanf("%c",&c);
		}
		j=i;
		c='+';
		int flag=1,num=0;
		for(i=0;i<j;i++)
		{
			if(isdigit(s[i]))
			{				
					num=num*10+(s[i]-48);
									
			}
			else
			{
			//	printf("&%d\n",num);
				if(k==1)
				{
					sum=num;
					k++;
				}

				else if(k>1)
				{
					
					if(c=='+')
						sum+=num;
					else if(c=='-')
						sum-=num;
					else if(c=='/')
						sum/=num;
					else if(c=='%')
						sum%=num;
					else if(c=='*')
						sum*=num;

				}
				c=s[i];
				if(c=='=')
				{
					printf("%d\n",sum);
					break;
				}
				//printf("%%%d\n",sum);
				num=0;
			}
		}
		
	}
	return 0;
}
