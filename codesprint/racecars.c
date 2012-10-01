#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
	int v;
	int p;
}node;
int main()
{
	int n,i;
	scanf("%d",&n);
	node a[n];
	for(i=0;i<n;i++)
		scanf("%d %d",&a[i].p,&a[i].v);
	node maxp,maxv;
	maxp.p = -1;
	maxv.v=-1;
	maxv.p=-1;
	for(i=0;i<n;i++)
	{
		if(a[i].p>maxp.p)
			maxp = a[i];
		if(a[i].v>maxv.v)
			maxv.v=a[i].v;
		else if(a[i].v==maxv.)
	}
	int count = 0;
	for(i=0;i<n;i++)
	{	
		if(a[i].p == max.p)
			count++;
	}
	return 0;
}
