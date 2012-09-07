#include<stdio.h>
#include<string.h>
int main()
{
	int l=2;
	while(l!=1)
	{
		char c[1000];
		scanf("%s",c);
		int i,n,j;
		l=strlen(c);
		if(l==1)
			break;
		else
		{
			scanf("%d",&n);
			i=0;
			while(i<l)
			{
				for(j=i;j<l;j++)
					printf("%c",c[j]);
				for(j=1;j<n;j++)
					printf("%s",c);
				for(j=0;j<i;j++)
					printf("%c",c[j]);	
				printf("\n");
				i++;
			}			
		}		
	}
	return 0;
}
