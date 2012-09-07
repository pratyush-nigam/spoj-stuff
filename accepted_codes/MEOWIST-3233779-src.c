#include<stdio.h>
#include<string.h>
typedef struct node{
	int age[500000];
	char name[500000][20];
}node;
node a;
int main()
{
	int i=0,n,j,k,tmp;
	char ch[20];
	
//	FILE *fp = fopen("ff","r");

	while(scanf("%s",a.name[i])!=EOF)
	{
		if(scanf("%d",&a.age[i])==EOF)
		{
			i++;
			break;
		}
		else
			i++;
	}
	
//	scanf("%d",&n);
/*	while(i<n)
	{
		scanf("%s",a.name[i]);
		scanf("%d",&a.age[i]);

		i++;
	}*/
	j=i;
	//for(i=0;i<j;i++)
	//	printf("**+%s %d %d\n",a.name[i],a.age[i],i);
	//j=i;
	i=0;
	while(i<(j-1))
	{
	
		k=i+1;
		while(k<j)
		{
			if(a.age[k]>a.age[i])
			{
				tmp=a.age[i];
				a.age[i]=a.age[k];
				a.age[k]=tmp;
				strcpy(ch,a.name[k]);
//				printf("%s**t\n",ch);
				strcpy(a.name[k],a.name[i]);
				strcpy(a.name[i],ch);
			}
			else if(a.age[k]==a.age[i])
			{
				if(strcmp(a.name[k],a.name[i])<0)
				{
					strcpy(ch,a.name[k]);
					strcpy(a.name[k],a.name[i]);
					strcpy(a.name[i],ch);
				}
			}
			k++;
		}
		i++;
	}
	for(i=0;i<j;i++)
	{
		printf("%s\n",a.name[i]);
	}
	return 0;
}
