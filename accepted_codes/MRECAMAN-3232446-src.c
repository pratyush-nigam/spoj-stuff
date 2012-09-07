#include<stdio.h>
int s[10000000];
int a[500001];
int main()
{


	int i=1,j,num=0,flag=0;
	int n;
//	printf("lol2");	
	i=1;
	//printf("lol1");
	for(j=0;j<1000000;j++)
		s[j]=0;
//	printf("lol");
	s[0]=1;
	a[0]=0;
	while(i<=500000)
	{
		flag=1;
		num=a[i-1]-i;
		//printf("**num=%d %d ",num,i);
		if(num>0)
		{
		//	printf("s[num]=%d ",s[num]);
			if(s[num]>0)
			{	//printf("lol ");
				flag=0;
			}
			else if(s[num]==0)
				s[num]++;
		//	printf("s[num]=%d flag=%d ",s[num],flag);
		}
		else
			flag=0;
		if(flag==1)
			a[i]=num;
		else
			a[i]=a[i-1]+i;
		num=a[i];
		s[num]++;
	//		printf("%d\n",a[i]);
		i++;
	}
	while(1)
	{
		scanf("%d",&n);
		if(n==(-1))
			break;
		else
			printf("%d\n",a[n]);
	}
	return 0;
}
