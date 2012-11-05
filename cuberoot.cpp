#include<cstdio>
using namespace std;

int main()
{
	int x=8;
	if(x<=1)
		return x;
	int l=0,u=x/3+1,m;
	while(l+1<u)
	{
		m = l + (u-l)/2;
		int p = m*m*m;
		if(p==x)
			break;
		else if(p>x)
			u = m;
		else
			l = m;
	}
	printf("%d\n",m);
	return 0;
}
