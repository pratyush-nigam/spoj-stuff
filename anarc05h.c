#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int size;

int counter(int index, int a[], int prev_num)
{
	if(index == size)
		return 1;
	if(index == size-1 && prev_num <= a[index])
		return 1;

	int sum=0,i,j,count=0;
	//printf("lol");
	for(i=0; i<size-index-1; i++)
	{
		sum=0;
		for(j=0; j<=i; j++)
		{
			sum+=a[j];
		}
		printf("j = %d\n",j);
		if(prev_num<=sum)
			count+=counter(j,a,sum);
	}
	return count;
}

int main()
{
	char s[50];
	scanf("%s",s);
	int j = 1;
	while(strcmp("bye",s)!=0)
	{
		int len = strlen(s),i;
		int a[len];
		size = len;
		for(i=0;i<len;i++)
		{
			a[i] = s[i]-48;
			//printf("%d",a[i]);
		}
		int count;
		count = counter(0,a,0);
		printf("%d. %d\n",j,count+1);
		j++;
		scanf("%s",s);
	}
}
