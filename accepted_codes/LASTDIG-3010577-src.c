#include<stdio.h>
int main()
{
	int g,f;
	scanf("%d",&f);
	for(g=1;g<=f;g++)
	{
		int a,i=1,j;
		long int b;
		scanf("%d%d",&a,&b);
		
		if(b==0)
			printf("1\n");
		else
		{
			int s[10];
			for(i=0;i<10;i++)
			s[i]=0;
			s[0]=a%10;
			i=0;
			a=a%10;

			while(a!=(a*a))
			{
				if(a==((s[i]*a)%10))
				{
					break;
				}
				else
				{
					
					i++;
					s[i]=(s[i-1]*a)%10;
				}
			}
			i++;
		/*for(j=0;j<i;j++)
				printf("%d ",s[j]);
			printf("\n");*/
			int num;
			b=b%i;
			if(b==0)
				num=s[i-1];
			else 
				num=s[b-1];
			printf("%d\n",num);		
		}
	}
	return 0;
}
