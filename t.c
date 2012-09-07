#include<stdio.h>
int rec(int i)
{
	static int d=1;
	if(i >= 5)
		return i;
	d=d+i;
	i=i+i;
	printf("%d %d\n",d,i);
	rec(d);
}
main()
{
    int a[2][3]= { (1,2,3),(4,5,6)};
    int (*ptr)[3] = &a[0];
    printf("%d %d\n", (*ptr)[1],(*ptr)[2]);
    ptr+=1;
    printf("%d %d\n", (*ptr)[1],(*ptr)[2]);
 
}
/*
int main()
{
	printf("%d\n",rec(1));
	return 0;
}*/
