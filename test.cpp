#include<string>
#include<cstdio>
#include<iostream>
using namespace std;

	int carrotsBetweenCarrots(int x1, int y1, int x2, int y2)
	{
		int i,j,y=y1,x=x1,c=0;
		if(y1<y2)
			y = y2;
		if(x1<x2)
			x = x2;
		for(i=0;i<=x;i++)
		{
			for(j=0;j<=y;j++)
			{
				if((x2-x1)*(y2-j)==(y2-y1)*(x2-i)){
					c++;
					printf("%d %d\n",i,j);
				}
			}
		}
		return c-2;
	}
int main()
{
	int i = carrotsBetweenCarrots(1,1,5,5);
	printf("%d\n",i);
	return 0;
}
