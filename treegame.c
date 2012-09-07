#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
	int h,i,j,sum=0,size;
	scanf("%d",&h);
	size = pow(2,h);
	int a[35000];
	for(i=0;i<size+1;i++)
		a[i]=2;
	for(i=0;i<size;i++)
	{
		int ind;
		scanf("%d",&ind);
		//printf("rem=%d a[ind-1]=%d\n",ind%2,a[ind-1]);
		if(ind%2==0 && a[ind-1]==2) 
		{
			a[ind] = 1;//if the node is first in the pair
			printf("1 ");
		//	printf("lol"); 
		}
		else if(ind%2==1 && a[ind+1]==2)
		{
			a[ind] = 1;//if the node is first in the pair
			printf("1 ");
		//	printf("lol"); 
		}
		else
		{
			//printf("true");
			int flag = 1,rem = ind%4,k;
			if(rem != 0)
				j = ind+(4-rem);
			else
				j = ind;
			for(k=0;k<4;k++)			
			{
				if(a[j-k]==2 && (j-k)!=ind)
				{
					flag = 0;	
					break;
				}					
			}
			if(flag == 0)
			{
				a[ind] = 0;//if the node is paired with a 1
				if(i!=size-1)
					printf("0 ");
			}
			else
			{
				a[ind] = 1;
				if(i!=size-1)
					printf("1 ");
			}
		}
	}
	printf("\n");
	return 0;
}
