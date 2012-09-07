#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	int t;
	scanf("%d",&t);
	while(t>0)
	{
		char s[100002];
		scanf("%s",s);
		int i,count=0;
		for(i=0;i<strlen(s);i++)
		{
			if(s[i] != '4' && s[i] != '7')
				count++;
		}
		printf("%d\n",count);
		t--;
	}
	return 0;
}
