#include<stdio.h>
int main()
{
	int a[10000][6];
	int i=0,j=0,d=0;
	
//	FILE *fp=fopen("t.txt","r");
//	while(a[i][j]!=-1)
	while(scanf("%d",&a[i][j])!=EOF)	
	{
		//scanf("%d",&a[i][j]);
		if(j==5)
		{
			i++;
			j=0;
		}
		else 
		{
			j++;
		}
	}
	d=i;
/*	i=0;
	while(i<d)
	{
		j=0;
		while(j<6)
		{
			printf("%d ",a[i][j]);
			j++;
		}
		printf("\n");
		i++;
	}*/
	i=0;
	int sum,time;
	while(i<d)
	{
		//if(i>0)
		//	printf("\n");
		j=0;
		sum=0;
		time=0;
		while(j<6)
		{			
			if(j<3)
			{
				if(a[i][j]!=0)
					sum++;
				else
					a[i][j+3]=0;
			}
			else
			{
				if(a[i][j]>0)
				{
					if(a[i][j]>1)
					{
						a[i][j]=(a[i][j]-1)*1200;
						time+=a[i][j];
					}
					time+=a[i][j-3];				
				}				
			}
			j++;
		}
		printf("team %d: %d, %d\n",(i+1),sum,time);
		i++;
	}
return 0;
}
