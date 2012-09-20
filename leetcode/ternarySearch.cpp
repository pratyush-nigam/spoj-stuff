#include<vector>
#include<cstdio>
using namespace std;

int main()
{
	int a[7] = {1,2,3,4,3,2,1};
	int n = 7;
	int r=n-1,l=0,lt,rt;
	while((r-l) > 2)
	{
		rt = r - ((r-l)/3);
		lt = l + ((r-l)/3);
		if(a[lt] < a[rt])
			l = lt;
		else
			r = rt;
	}
	printf("%d\n",a[(r+l)/2]);
}
