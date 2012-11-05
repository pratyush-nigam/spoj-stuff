#include<stdio.h>
/*void dfs(int a[],int *m[],int k)
{
	
}*/
int main()
{
	int i,j,k,t;
	scanf("%d",&k);
	int a[k],b[k];
	int m[k][k];
	for(i=0;i<k;i++)
		for(j=0;j<k;j++)
			m[i][j]=0;
	for(i=0;i<k;i++){
		scanf("%d",&a[i]);
		b[i]=0;
	}
	char x[k+10];
	for(i=0;i<k;i++)
	{
		scanf("%s",x);
		for(j=0;j<k;j++)
		{
			if(x[j]=='Y')
				m[i][j]=1;
		}
	}
	
	int r;
	for(i=0;i<k;i++)
		for(j=0;j<k;j++)
			for(r=0;r<k;r++)
				if(m[i][j]==1 && m[r][i]==1)
					m[r][j]=m[j][r]=1;
	for(i=0;i<k;i++)
	{
		t = -1;
		for(j=0;j<k;j++)
		{
			if(i+1==a[j])
			{
				t=j;
				break;
			}
		}
		for(j=0;j<t+1;j++)
		{
			if(m[t][j] && b[j]==0)
			{
				b[j]=1;
				int tmp = a[t];
				a[t] = a[j];
				a[j] = tmp;
				//printf("%d %d\n",a[i],a[t]);
				break;
			}
		}
	}
	for(i=0;i<k;i++)
		printf("%d ",a[i]);
	printf("\n");
	return 0;
}
