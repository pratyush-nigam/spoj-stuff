#include<stdio.h>
#include<string.h>
int main()
{
	int g,f;
	scanf("%d",&f);
	for(g=0;g<f;g++)
	{
		char a1[1000];
		long long int b;
		scanf("%s %lld",a1,&b);
		int i=0,a,s[1000];
		i=strlen(a1);
		a=a1[i-1]-48;
		if(b==0)
			printf("1\n");
		else
		{
			for(i=0;i<1000;i++)
				s[i]=0;
			s[0]=a;
			i=0;
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
