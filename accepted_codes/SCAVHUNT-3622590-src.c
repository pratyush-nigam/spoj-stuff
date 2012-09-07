#include<stdio.h>
#include<string.h>
int main()
{
	int g,f;
	scanf("%d",&f);
	for(g=0;g<f;g++)
	{
		int n,i,j,flag=0,k;
		scanf("%d",&n);
		char a[n-1][50],b[n-1][50],s[50];
		for(i=0;i<n-1;i++)
		{
			scanf("%s %s",a[i],b[i]);
//			printf("%s %s",a[i],b[i]);
		}
		//printf("lol");
		for(i=0;i<n-1;i++)
		{
			flag=1;
			for(j=0;j<n-1;j++)
			{
				if(strcmp(a[i],b[j])==0)
				{
					flag=0;
					break;
				}
			}
			if(flag==1)
			{
				k=i;
			//	printf("**%s\n",a[i]);
				strcpy(s,a[i]);
				break;
			}
		}
		printf("Scenario #%d:\n%s\n",g+1,s);
	        for(i=0;i<n-1;i++)
		{
			flag=1;
			printf("%s\n",b[k]);
			for(j=0;j<n-1;j++)
			{
				if(strcmp(b[k],a[j])==0)
				{
					k=j;
					flag=0;
					break;
				}
			}
			if(flag==1)
			{
			//	printf("%s\n",b[k]);
				break;
			}
		}
		printf("\n");			
	}	
	return 0;
}
