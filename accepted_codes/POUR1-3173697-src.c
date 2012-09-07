#include<stdio.h>
int main()
{

    int p,q;
    scanf("%d",&p);
    for(q=0;q<p;q++)
    {
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	int x,y;
	int count1,count2;
	if(a<b)
	{
	    a=a^b;
	    b=a^b;
	    a=a^b;
	}
	if(c>a&&c>b)
	{
	    printf("-1\n");
	    continue;
	}
	if(c==0)
	{
	    printf("0\n");
	    continue;
	}
	x=a;
	y=0;
	count1=1;
	while(x!=c&&y!=c)
	{
	    if(y==b)
	    {
		y=0;
		count1++;
	    }
	    if(x<b)
	    {
		y=x;
		x=0;
		count1++;
	    }
	    else
	    {
		x=x-(b-y);
		y=b;
		if(y==c)
		    break;
		count1++;
		if(x==c)
		    break;
	    }
	    if(x==0)
	    {
		x=a;
		count1++;
	    }
	    if(count1>100000)
		break;
	}
	
	x=0;
	y=b;
	count2=1;
	while(x!=c&&y!=c)
	{
	    if(x==a)
	    {
		x=0;
		count2++;
	    }
	    if(a-x>y)
	    {
		x=x+y;
		y=0;
		count2++;
		if(x==c)
		    break;
	    }
	    else
	    {
		y=y-(a-x);
		count2++;
		if(y==c)
		    break;
		x=a;
	    }
	    if(y==0)
	    {
		y=b;
		count2++;
	    }
	    if(count2>100000)
		break;
	}
	//printf("%d  %d\n",count1,count2);
	if(count1>100000&&count2>100000)
	    printf("-1\n");
	else if(count1<count2)
	    printf("%d\n",count1);
	else 
	    printf("%d\n",count2);
    }	
    return 0;
}
