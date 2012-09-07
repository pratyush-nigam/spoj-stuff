#include<stdio.h>
#include<string.h>
int main()
{
	char c, prev='\n';
	int flag=1,count=0;
	while(1)
	{
		if(scanf("%c",&c) == EOF){
			printf("%d\n",count);
			break;
		}
		if(isalpha(c) && flag == 1){
			count++;
			flag = 2;
		}
		else
		{
			if(!isalpha(c) && flag ==2)
				flag = 1;
		}
		if(c == '\n')
		{
			printf("%d\n",count);
			count = 0;
		}
	}
	return 0;
}

