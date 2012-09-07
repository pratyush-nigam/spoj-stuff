#include<stdio.h>
int main()
{
	int t,f;
	scanf("%d",&f);
	for(t=0;t<f;t++)
	{
		int ng,nm,max1=0,max2=0;
		scanf("%d%d",&ng,&nm);
		int g[ng],m[nm],i;
		for(i=0;i<ng;i++)
			scanf("%d",&g[i]);
		for(i=0;i<nm;i++)
			scanf("%d",&m[i]);
		for(i=0;i<ng;i++)
			if(g[i]>max1)
				max1=g[i];
		for(i=0;i<nm;i++)
			if(max2<m[i])
				max2=m[i];
		if(max1>=max2)
			printf("Godzilla\n");
		else 
			printf("MechaGodzilla\n");		
	}
	return 0;
}
