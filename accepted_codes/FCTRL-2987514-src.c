#include<stdio.h>
int main()
{
	int g,f;
	scanf("%d",&f);
	for(g=1;g<=f;g++)
	{
		int num,f=5,count=0;
		scanf("%d",&num);
		while(f<=num)
		{
			count+=(num/f);
			f*=5;
		}
		printf("%d\n",count);
	}
	return 0;
}
