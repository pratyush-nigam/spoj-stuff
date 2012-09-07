#include<stdio.h>
#include<string.h>
int main()
{
int i,j,n,state[2],flag,k;
char n1[1500],n2[1500],ch,nt1[1500],nt2[1500];
scanf("%d%c",&n,&ch);
while(n!=0)
	{int st[2]={0};
	int sum[3000]={0};
	scanf("%s %s",n1,n2);
	for(i=0;i<n;i++)
		if (n1[i]=='1')
			{
			st[0]=1;
			break;
			}
	for(i=0;i<n;i++)
		if (n2[i]=='1')
			{
			st[1]=1;
			break;
			}
	if (st[0]==0 || st[1]==0)
		{
		for (i=0;i<n;i++)
			printf("0");
		printf("\n");
		scanf("%d%c",&n,&ch);
		continue;
		}
	if (n1[0]=='1')
		state[0]=1;
	else
		state[0]=0;
	if(n2[0]=='1')
		state[1]=1;
	else
		state[1]=0;
	if (state[0]==1)
		{
		j=0;	
		k=n-1;
		while(n1[k]=='0')
			{
			nt1[j]=0;
			j++;
			k--;
			}
		nt1[j]=1;
		j++;
		k--;
		while(k>=0)
			{
			if (n1[k]=='0')
				nt1[j]=1;
			else
				nt1[j]=0;
			k--;
			j++;
			}
		}
	else
		{
		k=n-1;
		j=0;
		while(k>=0)
			{
			nt1[j]=n1[k]-48;
			k--;
			j++;
			}
		}
	if (state[1]==1)
		{
		j=0;	
		k=n-1;
		//printf("k= %d %c\n",k,n2[k]);
		while(n2[k]=='0')
			{//printf("here\n");
			nt2[j]=0;
			j++;
			k--;
			}
		nt2[j]=1;
		k--;
		j++;
		while(k>=0)
			{
			if (n2[k]=='0')
				nt2[j]=1;
			else
				nt2[j]=0;
			k--;
			j++;
			}
		}
	else
		{	
		j=0;
		k=n-1;
		while(k>=0)
			{
			nt2[j]=n2[k]-48;
			k--;
			j++;
			}
		}
/*	printf("first no: ");
	for (i=n-1;i>=0;i--)
		printf("%d",nt1[i]);
	printf("\nsecond no : ");
	for (i=n-1;i>=0;i--)
		printf("%d",nt2[i]);
	printf("\n");*/	
	for (i=0;i<n;i++)
		{
		for (j=0;j<n;j++)
			{
			sum[i+j]=nt1[i]*nt2[j]+sum[i+j];
			}
		}
	/*printf("sum no : ");
	for (i=n-1;i>=0;i--)
		printf("%d",sum[i]);
	printf("\n");*/
	for (i=0;i<2*n;i++)
		{
		if (sum[i]!=0)
			{
			if (sum[i]%2==1)	
				{
				sum[i+1]=sum[i+1]+sum[i]/2;
				sum[i]=1;
				}
			else
				{
				sum[i+1]=sum[i+1]+sum[i]/2;
				sum[i]=0;
				}
			}
		}
	/*printf("sum no : ");
	for (i=2*n-1;i>=0;i--)
		printf("%d",sum[i]);
	printf("\n");*/
	if ((state[0]==0 && state[1]==0) || (state[0]==1 && state[1]==1))	
		{flag=1;
		for (i=n-1;i<2*n;i++)
			if (sum[i]==1)
				{	
				flag=0;
				break;
				}
		}
	else
		{flag=1;
		i=0;
		while(sum[i]==0)
			i++;
		i++;
		while(i<=2*n)
			{
			if (sum[i]==1)
				sum[i]=0;
			else
				sum[i]=1;
			i++;
			}
		for (i=n-1;i<=2*n-1;i++)
			if (sum[i]==0)
				{
				flag=0;
				break;
				}
		//printf("i = %d\n",i);
		}
		if (flag==0)
			printf("overflow\n");
		else
		{
		for (i=n-1;i>=0;i--)
			printf("%d",sum[i]);
		printf("\n");
			
		}
	scanf("%d%c",&n,&ch);
	}
return 0;
}
