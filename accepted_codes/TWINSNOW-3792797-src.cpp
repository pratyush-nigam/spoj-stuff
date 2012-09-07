#include<stdio.h>
#include<stdlib.h>
#define DEBUG 0

int N;
typedef struct node{
	int a[6];
    int id;
}node;
node sorted[100100],unsorted[100100];

void escape()
{
	printf("Twin snowflakes found.\n");
	exit(0);
}

void issame(int aa,int b)
{
	if(DEBUG) printf("Comparing %d %d\n",aa,b);
	int i,k,ok;
	for(k=0;k<6;k++)
	{
		ok=1;
		for(i=0;i<6;i++)
			if(unsorted[aa].a[i]!=unsorted[b].a[(i+k)%6]) {ok=0; break;}
		if(ok) escape();
	}
	for(k=0;k<6;k++)
	{
		ok=1;
		for(i=0;i<6;i++)
			if(unsorted[aa].a[i]!=unsorted[b].a[(6-i+k)%6]) {ok=0; break;}
		if(ok) escape();
	}
}

int intsort(const void *pa,const void *pb)
{
	int *aa=(int *)pa;
	int *bb=(int *)pb;
	if((*aa)>(*bb)) return -1;
	return 1;
}

int sort6(const void *pa,const void *pb)
{
	node *aa=(node *)pa;
	node *bb=(node *)pb;
	int i;
	for(i=0;i<6;i++)
	{
		if((*aa).a[i]>(*bb).a[i]) return 1;
		if((*aa).a[i]<(*bb).a[i]) return -1;
	}
	return 0;
}

int equal(int aa,int b)
{
	for(int i=0;i<6;i++)
		if(sorted[aa].a[i]!=sorted[b].a[i]) return 0;
	return 1;
}

void read(void)
{
	int i,j;
	scanf(" %d",&N);
	for(i=0;i<N;i++)
	{
		for(j=0;j<6;j++)
			scanf(" %d",&unsorted[i].a[j]),sorted[i].a[j]=unsorted[i].a[j],sorted[i].id=i;
		qsort(sorted[i].a,6,sizeof(int),intsort);
	}
	qsort(sorted,N,sizeof(node),sort6);
}

void find(void)
{
	int i=0,j,k,l;
	while(i<N-1)
	{
		j=i+1;
		while(equal(i,j) && j<N) j++;
		for(k=i;k<j-1;k++)
			for(l=k+1;l<j;l++)
			{
				issame(unsorted[k].id,unsorted[l].id);
			}
		i=j;
	}
	printf("No two snowflakes are alike.\n");
}

int main()
{
	read();
	find();
	return 0;
}
