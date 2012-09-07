#include <stdio.h>
#include <stdlib.h>

typedef struct point
{
	int x;
	int y;
}point;

int n,m;

bool cat(point rat, point c1, point c2)
{
	
	point r;
	r = rat
	if(rat.x==0 || rat.x == (n-1) || rat.y==0 || rat.y == (m-1))
		return true;
	if(((rat.x+1==c1.x)&&(rat.y+1==c1.y)&&(rat.x-1==c2.x)&&(rat.y-1==c2.y))||((rat.x+1==c2.x)&&(rat.y+1==c2.y)&&(rat.x-1==c1.x)&&(rat.y-1==c1.y))||((rat.x-1==c1.x)&&(rat.y+1==c1.y)&&(rat.x+1==c2.x)&&(rat.y-1==c2.y))||((rat.x-1==c2.x)&&(rat.y+1==c2.y)&&(rat.x+1==c1.x)&&(rat.y-1==c1.y)))
		return false;
	//moving the mouse
	if(((rat.x+1==c1.x)&&(rat.y+1==c1.y))||((rat.x+1==c2.x)&&(rat.y+1==c2.y)))//move left or up
	{
		//left
		r.x = rat.x-1;
		

		//up
		r.y = rat.y+1;
	}
	if(((rat.x-1==c2.x)&&(rat.y-1==c2.y))||((rat.x-1==c1.x)&&(rat.y-1==c1.y)))//move right or down
	{
		//right
		r.x = rat.x+1;
		
		//down
		r.y = rat.y-1;
	}
	if(((rat.x-1==c1.x)&&(rat.y+1==c1.y))||((rat.x-1==c2.x)&&(rat.y+1==c2.y)))//move up or right
	{
		//up
		r.y = rat.y+1;

		//right
		r.x = rat.x+1;
	}
	if(((rat.x+1==c2.x)&&(rat.y-1==c2.y))||((rat.x+1==c1.x)&&(rat.y-1==c1.y)))//move left or down
	{
		//left
		r.x = rat.x-1;

		//down
		r.y = rat.y-1;
	}

}

int main()
{
	scanf("%d %d",&n,&m);
	int t;
	scanf("%d",&t)
	while(t != 0)
	{
		int a[n][m];
		point rat, cat1, cat2;
		scanf("%d %d %d %d %d %d", rat.x, rat.y, cat1.x, cat1.y, cat2.x, cat2.y);
		if(cat(rat,cat1,cat2)==true)
			printf("YES\n");
		else if(cat(rat,cat1,cat2)==false)
			printf("NO\n");		
		t--;
	}
	return 0;
}
