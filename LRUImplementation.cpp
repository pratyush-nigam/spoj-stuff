#include<cstdio>
#include<map>
#include<vector>
#include<algorithm>
using namespace std;

typedef struct Node
{
	Node *next;
	Node *prev;
	int n;

}Node;

void printCache(Node *h)
{
	printf("Current State of Cache:\n");
	Node *head = h;
	while(head != NULL)
	{
		printf("%d ",head->n);
		head = head-> next;
	}
	printf("\n");
	return;
}

Node *createNode(Node *h,int n)
{
	h = (Node*)malloc(sizeof(Node));
	h->n = n;
        h->prev=NULL;
	h->next=NULL;
 	return h;	
}

int main()
{
	int n;
	printf("Cache size: ");
	scanf("%d",&n);// n is the cache-size
	
	Node *head;
	Node *end;
	head = createNode(head,1);	
	end = head;
	Node *a[100] = {NULL};
	a[1] = head;
	int i,num,count=2;
	
	for(i=0;i<n-1;i++)//prepopulate the cache
	{
		Node *h;
		h = createNode(h,count);
		h->next = head;
		head->prev = h;
		head = h;
		a[count++] = h;
	}

	printCache(head);

	while(1)//Assumption - the cache would only have values from 0-99
	{
		scanf("%d",&num);
		if(num < 0 || num > 99)
			break;
		if(a[num]!=NULL && a[num]!=end && a[num]!=head) 
		{
			Node *t = a[num];
			Node *p = t->prev;
			p->next = t->next;
			t->next->prev = p;
			head->prev = t;
			t->prev = NULL;
			t->next = head;
			head = t;
		}
		else if(a[num]!=head)
		{
			Node *t;
			t = (Node*)malloc(sizeof(Node));
			t->prev=NULL;
			t->next = head;
			t->n = num;
			head->prev = t;
			head = t;
			a[num] = t;

			t = end;
			end = end->prev;
			end->next = NULL;
			if(t->n!=num)
				a[t->n] =NULL;
			free(t);
		}
		printCache(head);
	}
	return 0;
}
