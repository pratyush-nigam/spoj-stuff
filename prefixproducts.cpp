#include<cstdio>
using namespace std;

int main()
{
	int a[5]={4,3,2,1,2},n=5;
	int i,l=1,r=1;
	int ar[n];
	for(i=0;i<n;i++)
		ar[i]=1;
	for(i=0;i<n;i++)
	{
		ar[i] *= l;
		ar[n-i-1]*=r;
		l = l * a[i];
		r = r * a[n-i-1];
	}
	for(i=0;i<n;i++)
		printf("%d ",ar[i]);
	printf("\n");
}
