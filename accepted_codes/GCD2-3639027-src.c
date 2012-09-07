#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
int gcd(int a,int b)
{
	if(b==0)
		return a;
	else
		return gcd(b,a%b);
}
int main()
{
	int g1,f;
	scanf("%d",&f);
	for(g1=0;g1<f;g1++)
	{
		int a;
		scanf("%d",&a);
		
			char s[251];
			scanf("%s",s);
			int n,g,i,n1;
			n=strlen(s);
			int b[n],b1=0;
			n1=log(a)+1;
		if(a==0)
			printf("%s\n",s);
		else if(b[0]=='0')
			printf("%d\n",a);
		else
		{
			if(n1>=n)
			{
				/*for(i=0;i<n;i++)
				  b1=b1*10+s[i];	*/
				b1=atoi(s);
				if(a>=b1)
					g=gcd(a,b1);
				else
					g=gcd(b1,a);
				printf("%d\n",g);
			}
			else
			{
				for(i=0;i<n;i++)
					b[i]=s[i]-48;
				i=0;
				int num=0;
				while(i<n)
				{

					while(num<a && i<n)
					{
						num=num*10+b[i];
						i++;
					}
					if(i==n && num<a)
						break;
					else
						num=num%a;
				}
				//		printf("**%d a=%d\n",num,a);
				//b1=num;			
				g=gcd(a,num);
				printf("%d\n",g);
			}
		}	
	}
	return 0;
}
