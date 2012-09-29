#include<cstdio>
using namespace std;

int main()
{
	int g;
	scanf("%d",&g);
	while(g--)
	{
		int n,i;
		scanf("%d",&n);
		long long int a[n],m=-1,mid,l,r;
		for(i=0;i<n;i++){
			scanf("%lld",&a[i]);
			if(a[i] > m)
				m = a[i];
		}
		l=0;
		r=m;
		while(l<r)
		{
			mid = (l+r+1)/2;
			long long int e=0;
			
			for(i=0;i<n;i++)
			{
				if(a[i]+e < mid)
					break;
				else
					e = (a[i]+e)-mid;
			}
			if(i==n)
				l = mid;
			else
				r = mid-1;	
		}
		printf("%lld\n",l);
	}
	return 0;
}
