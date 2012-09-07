#include<stdio.h>
#include<string.h>
int main()
{
	int n;
	scanf("%d",&n);
	while(n!=0)
	{
		char s[200];
		int c,len,d=0,i,j;
		scanf("%s",s);
//		printf("%s\n",s);
		len=strlen(s);
//		printf("%d\n",len);
		c=len/n;
		char a[c][n];
		for(i=0;i<c;i++)
		{
			if(i%2==0)
				for(j=0;j<n;j++)
				{
					a[i][j]=s[d];
					d++;
				}
			else
				for(j=n-1;j>=0;j--)
				{
					a[i][j]=s[d];
					d++;
				}
			a[i][n]='\0';		
		//	printf("%s\n",a[i]);
		}
		for(i=0;i<n;i++)
		{
			for(j=0;j<c;j++)
			{
				printf("%c",a[j][i]);
			}
		}
		printf("\n");
		scanf("%d",&n);
	}
	return 0;
}
