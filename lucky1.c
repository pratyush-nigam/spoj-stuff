#include <stdio.h>
#include <stdlib.h>

int check(int l,int r)
{
	//printf("%d %d\n",l,r);
	int i,s1=0,s2=0;
	for(i=l;i<=r;i++)
	{
		int num = i;
		while(num>0)
		{
			int rem = num%10;
			num/=10;
			if(rem==4)
				s1++;
			else if(rem==7)
				s2++;
		}	
	}
	if(s1==s2)
	{
		printf("%d %d\n",l,r);
		return 1;
	}
	else
		return 0;
}

int main()
{
	int t;
	scanf("%d",&t);
	while(t>0)
	{
		int i,j,n,count=0;
		scanf("%d",&n);
		for(i=1;i<=n;i++)
		{
			j=1;
			while(j<=i)
			{
				//printf("lol\n");
				//int c = check(j,i);
				//if(c==1)
				//	count++;
				j++;
			}
		}
		printf("%d\n",count);
		t--;
	}
	return 0;
}
