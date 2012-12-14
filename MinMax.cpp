#include<cstdio>
using namespace std;
int main()
{
	int n,i;
	int a[10]={1,2,3,4,5,6,7,8,9,10};
	int max,min;
	max = a[1];
	min = a[0];
	i = 2;
	while(i<10)
	{
		if(a[i]<a[i+1])
		{
			if(min > a[i])
				min = a[i];
			if(max < a[i+1])
				max = a[i+1];
		}
		else
		{
			if(max > a[i])
				max = a[i];
			if(min < a[i+1])
				min = a[i+1];
		}
		i+=2;
	}
	printf("%d %d\n",min,max);
	return 0;
}
