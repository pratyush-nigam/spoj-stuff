#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int tindex(char *s, char c)
{
	int i;
	for(i=0;s[i]!='\0';i++)
	{
		if(s[i] == c)
			return i;
	}
	return -1;
}
int main()
{
	int n;
	scanf("%d",&n);
	while(n>0)
	{
		int i,count=0,y=1;
		char j[105],s[105],c[105];	
		scanf("%s",c);
		scanf("%s",s);
		j[0]=c[0];
		j[1]='\0';
		for(i=0;i<strlen(c);i++)
		{
			if(tindex(j,c[i]) < 0)
			{
				j[y]=c[i];
				y++;
				j[y] = '\0';
			}
		}
		for(i=0;i<strlen(s);i++)
		{
			if(tindex(j,s[i]) >= 0)
			{
				count++;
			}
		}
		printf("%d\n",count);
		n--;
	}
	return 0;
}
