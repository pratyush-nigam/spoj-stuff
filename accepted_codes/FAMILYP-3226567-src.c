#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	char s[20];
	//scanf("%s",s);
	int t,l,num;
	while(scanf("%s",s)!=EOF)
	{
		l=strlen(s);
		num=atoi(s);
		char ch='A';
		int i=1,j=0;
		t=num;	
		while(num>0)
		{
			if(j==i)
			{
				if(ch=='Z')
					ch='A';
				else
					ch=(char)(ch+1);
				j=1;
				i++;
			}
			else
			{
				j++;
			}
			num--;
		}	
		printf("TERM %d IS %c\n",t,ch);
		//scanf("%s",s);
		//l=strlen(s);
	}
	return 0;
}

