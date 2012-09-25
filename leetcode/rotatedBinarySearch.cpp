#include<cstdio>
#include<vector>
using namespace std;

int main()
{
	int n = 7;
	int a[7] = {4,5,6,7,0,1,2};
	int l=0,r=n-1,m;
	int y = 6;
	while(l<=r)
	{
		m = l + ((r-l)/2);
		if(a[m] == y)
			printf("%d\n", m);
		if(a[m] >= a[l])
		{
			if(a[l] <= y && y <= a[m])
				r = m-1;
			else
				l = m + 1;
		}
		else
		{
			if(a[m] <= y && a[r] >= y )
				l = m+1;
			else
				r = m-1;
		}
	}
	return 0;
}
