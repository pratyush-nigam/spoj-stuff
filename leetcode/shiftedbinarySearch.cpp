#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	int a[7] = {2,3,1,4,7,5,6};
	int k = 3,n=7;
	int key = 5,l=0,r=n-1,mid;
	while(l<r)
	{
		mid = (l+r+1)/2;
		int nl=l,nr=r;
		printf("%d\n",mid);
		if(a[mid]==key){
			printf("%d\n",mid);break;}
		if(a[mid] < key)
			nl = (mid-k+1)<l?l:mid-k+1;
		else
			nr = (mid+k-1)>r?r:mid+k-1;
		if(nl==l && nr==r)
		{
			linearsearch(a,key,l,r);
			break;
		}
		l=nl;
		r=nr;
	}
	return 0;
}
