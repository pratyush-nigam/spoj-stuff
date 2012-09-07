#include<stdio.h>
#include<stdlib.h>
typedef struct list
{
	int num;
	struct list *next;
}list;
int main()
{
	int a[3000];
	a[0]=2;
	int n,d,i;
	list *start;
	start=(list*)malloc(sizeof(list));
	start->next=NULL;
	list *st;
	st=start;
	for(i=2;i<35000;i+=2)
	{
		list *newnode;
		/*while(st->next!=NULL)
		{
//			printf("%d ",st->next->num);
			st=st->next;
		}*/
	//	printf("l");
		newnode=(list *)malloc(sizeof(list));
		newnode->num=i+1;
		newnode->next=NULL;
		st->next=newnode;
		st=st->next;
	}
	for(i=1;i<3000;i++)
	{
		a[i]=start->next->num;
		list *st,*prev;
		prev=start->next;
		start->next=start->next->next;
		free(prev);
		//prev=start;
		st=start->next;
		int count=a[i];
		d=1;
		while(st->next!=NULL)
		{
			d++;
			if(d==count)
			{
	//			printf("%d->%d\n",a[i],st->next->num);
				prev=st->next;
				st->next=st->next->next;
				free(prev);
				d=0;				
			}
			else
				st=st->next;				
			/*prev=st;
			st=st->next;
			d++;
			if(d==count)
			{
				list *s;
				s=prev->next;
				prev->next=st->next;
				free(s);
				printf("1");
				st=prev->next;
				printf("3");
				d=1;
			}*/
		}
	//	printf("lol");
	}
	//for(i=0;i<30;i++)
	//	printf("%d ",a[i]);
//	printf("\n");
	scanf("%d",&n);
	while(n!=0)
	{		
		printf("%d\n",a[n-1]);
		scanf("%d",&n);
	}
	return 0;
}
