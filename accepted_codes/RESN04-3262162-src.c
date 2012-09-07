#include<stdio.h>
int main()
{
	int g,f;
	scanf("%d",&f);
	for(g=0;g<f;g++)
	{
		int n,i,turn=0,d=0;
		scanf("%d",&n);
		int a[n];
		for(i=0;i<n;i++)
			scanf("%d",&a[i]);
		i=n-1;
		int j=0;
		while(i>=0)
		{	
			
			if(a[i]>0)
			{
				if((a[i] == (i+1))&&(j==0))
				{
					a[i]=0;
					
					if(turn==0)
						turn=1;
					else
						turn=0;
				}
				else
				{
					j=i+1;
					if(a[i]>(i+1))
					{
						a[i]-=j;

					}
					else
					{
						j-=a[i];
						a[i]=0;								
					}
					if(j==0 && turn==0)
					{
						if(turn==0)
							turn=1;
						else
							turn=0;
					}
				}
			}
			if(a[i]==0)
				i--;
		}
		if(turn==1)
			printf("ALICE\n");
		else
			printf("BOB\n");
	}
	return 0;
}

