#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
	struct node *next;
	int num;
}node;

node *insert(int num, node *head)
{
	node *start;
	start = head;
	while(start->next != NULL)
	{
		start = start->next;
	}
	node *newnode;
	newnode = (node *) malloc(sizeof(node));
	newnode->num = num;
	newnode->next = NULL;
	start->next = newnode;
	return head;
}

node *reverse(node *head)
{
	node *prev=NULL;
	node *next;
	node *current=head;
	node *last = head;
	current = head;
	while(current != NULL)
	{
		next = current->next;
		current->next=prev;
		prev=current;
		current = next;		
	}
	last->next = current;
	return prev;
}

void checkpalindrome(node *head)
{
	node *start=head;
	node *half=head;
	while(start->next!=NULL && start->next->next!=NULL)
	{
		half = half->next;
		start = start->next->next;
	}
	half = reverse(half);
	node *s = head;
	while(s!=NULL)
	{
		printf("%d->",s->num);
		s=s->next;
	}
	printf("\n");
	start = head;
	node *h = half;
	while(start!=NULL)
	{
		printf("%d %d\n",h->num,start->num);
		if(start->num != h->num)
		{
			printf("No\n");
			return;
		}
		h = h->next;
		start = start->next;
	}
	printf("Yes\n");
	return;
}

int main()
{
	int n,i;
	node *head,*h;
	head = (node *)malloc(sizeof(node));
	head->num = -1;
	head->next = NULL;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		int num;
		scanf("%d",&num);
		head = insert(num,head);
	}
	h = head;
	head = head->next;
	free(h);
	checkpalindrome(head);
	return 0;
}
