#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
typedef struct node{
	long double num;
	struct node *next;
}node;
node *front;
node *rear;
int u=1;
void enq(long double n)
{
	if(u==1)
	{
		rear=(node*)malloc(sizeof(node));
		front=rear;
		rear->num=n;
	}
	else
	{
		rear->next=(node*)malloc(sizeof(node));
		rear=rear->next;
		rear->num=n;
	}
	u++;
	rear->next=NULL;	
	return;
}
int main()
{
	char c;
	long double x=0.0,y=0.0,px,py,sum=0.0,flag=0;
	while(scanf("%c",&c)!=EOF)
	{
		if(c=='(')
		{
			if(flag==0){
				scanf("%Lf, %Lf",&px,&py);
				flag=1;
			}
			else if(flag==1)
			{
				scanf("%Lf, %Lf",&x,&y);
//				printf("px=%lf py=%lf x=%lf y=%lf\n",px,py,x,y);
				double diff1,diff2;
				diff1=x-px;
				diff2=y-py;
				sum+=sqrt((diff1*diff1)+(diff2*diff2));
				enq(sum);
				px=x;
				py=y;
			}
		}
	}
	while(front!=NULL)
	{
		printf("The salesman has traveled a total of %0.3Lf kilometers.\n",front->num);
		front=front->next;
	}
	return 0;
}
