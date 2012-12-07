#include<stdio.h>

int numarray[8] = {1, 2, 3, 4, 5, 6, 7, 8};
main()
{
	int i, sum = 0;
	for(i = 0; i <= 7; ++i)
		sum+=numarray[i];
}
