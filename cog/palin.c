#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
	char s[3000];
	scanf("%s",s);
	int f;
	scanf("%d",&f);
	while(f>0)
	{
		int a,b,count=0;
		scanf("%d %d",&a, &b);
		count = b - a + 1;
		int i,j;
		for(i=a;i<b;i++)
		{
			for(j=i+1;j<=b;j++)
			{
				int t;
				//for(t=i;t<=j;t++)
				//	printf("%c",s[t]);
				//printf("\n");
				int k = j, l = i;	
				int flag = 0;
				while(k>l)
				{
					if(s[k]!=s[l]){
						flag = 1;
						break;
					}
					k--;
					l++;
				}
				if(flag == 0)
					count++;
			}
		}
		printf("%d\n",count);
		f--;
	}
	return 0;
}
