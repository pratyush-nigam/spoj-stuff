#include<stdio.h>
#include<string.h>

	int s[2001][2001];
int main()
{
	char a[1000];

	int i,l,j,count,c;
	scanf("%s",a);
	while(strcmp("Q",a)!=0)
	{
		for(i=0;i<2001;i++)
			for(j=0;j<2001;j++)
				s[i][j]=0;
		count=0;
		c=0;
		i=1000;
		j=1000;
		s[i][j]=1;
		l=strlen(a);
		while(c<l)
		{
			if(a[c]=='U')
			{
				i--;
				s[i][j]++;
			}	
			else if(a[c]=='D')
			{
				i++;
				s[i][j]++;
			}
			else if(a[c]=='R')
			{
				j++;
				s[i][j]++;
			}
			else if(a[c]=='L')
			{
				j--;
				s[i][j]++;
			}
			else if(a[c]=='Q')
				break;
			if(s[i][j]>1)
				count++;
			c++;
		}
		printf("%d\n",count);
		scanf("%s",a);
	}
	return 0;
}
