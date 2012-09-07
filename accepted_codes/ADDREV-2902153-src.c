#include<stdio.h>
int main()
{
	int f,g;
	scanf("%d",&f);
	for(g=1;g<=f;g++)
	{
		int n1,n2,sum=0,rev=0;
		scanf("%d %d",&n1,&n2);
		while(n1>0)
		{
			rev=rev*10+n1%10;
			n1/=10;
		}
		sum+=rev;
		rev=0;
		while(n2>0)
		{
			rev=rev*10+n2%10;
			n2/=10;
		}
		sum+=rev;
		rev=0;
		while(sum>0)
		{
			rev=rev*10+sum%10;
			sum/=10;
		}
		printf("%d\n",rev);
	}
	return 0;
}
			                
