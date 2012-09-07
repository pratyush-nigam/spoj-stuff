#include<stdio.h>
int main()
{
	int a[3],n;
	scanf("%d%d%d",&a[0],&a[1],&a[2]);
	n=a[0];
	int s[n],j,i,sum=0,tmp;
	for(i=0;i<n;i++)
		scanf("%d",&s[i]);
	for(i=0;i<(n-1);i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(s[i]<s[j])
			{
				tmp=s[j];
				s[j]=s[i];
				s[i]=tmp;
			}	
		}		
	}
	i=0;
	while(sum<(a[1]*a[2]))
	{
		sum+=s[i];
		i++;		
	}
	printf("%d",i);
	return 0;
}
