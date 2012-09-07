#include<stdio.h>
int main()
{
	int g,f;
	scanf("%d",&f);
	for(g=0;g<f;g++)
	{
		int n,j=0,t,d=0,p,c=0,i=0,a[1000];
		for(i=0;i<1000;i++)
			a[i]=0;
		scanf("%d",&n);
		if(n==0)
			printf("0");
		if(n>0)
		{
			a[0]=1;
			t=1;
		for(i=1;i<=n;i++)
		{
			j=0;
			while(j<t)
			{
				p=a[j]*i;
				a[j]=(c+p)%10;
				c=(c+p)/10;
				d++;
				j++;
			}
			while(c!=0)
			{
				a[j]=c%10;
				c/=10;
				d++;
				j++;
			}
			t=d;
			d=0;		
		}
		}
		for(i=t-1;i>=0;i--)
			printf("%d",a[i]);
		printf("\n");
	}
	return 0;
}
