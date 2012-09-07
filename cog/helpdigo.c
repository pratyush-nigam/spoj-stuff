#include<stdio.h>
#include<stdlib.h>

int main()
{
	int f;
	scanf("%d",&f);
	while(f>0)
	{
		int n,k,count = 0;
		scanf("%d%d",&n,&k);
		int a[n],vis[n],i,j;
		for(i=0;i<n;i++)
			a[i] =0;
		for(i=2;i<n;i++)
		{
			if(a[i]==0)
			{
				count++;
				j = i+i;
				while(j<n)
				{
					a[j] = 1;
					j+=i;
				}
			}
		}
		//printf("lol");
		i=n+1;
		int m;
		while(1)
		{
			int flag = 0;
			for(j=2;j*j<=i;j++)
			{
				if(i%j==0){
					flag = 1;
					break;
				}
			}
			if(flag==0)
				count--;
			if(count == 0)
			{
				m = i;
				break;
			}
			i++;
		}
		if(m<=k)
			printf("YES\n");
		else
			printf("NO\n");
		f--;
	}
	return 0;
}
