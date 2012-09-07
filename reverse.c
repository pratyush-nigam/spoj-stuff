#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void reverse(char *s)
{
	char *word;
	word = strtok(s," ");
	while(word != NULL)
	{
		//printf("%s\n",word);
		strrev(word);
		printf("%s ",word);
		word = strtok(NULL, " ");
	}
	printf("\n");
	return;
}

int main()
{
	char s[100];
	gets(s);
	reverse(s);
	return 0;
}
