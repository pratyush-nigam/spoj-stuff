#include<stdio.h>
#include<stdlib.h>

typedef struct point
{
	int x;
	int y;
}point;

int main()
{
	int n,i,j;
	scanf("%d",&n);
	point p[n];
	for(i=0;i<n;i++)
	{
		scanf("%d %d",&p[i].x,&p[i].y);
	}	
	
}
