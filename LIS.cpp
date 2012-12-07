#include<cstdio>
#include<vector>
#include<algorithm>
using namespace std;
int bs(vector<int> A,int T[],int l,int r,int k)
{
	int m;
	while(r-l > 1)
	{
		m = l + (r-l)/2;
		printf("%d\n",m);
		if(A[T[m]]>=k)
			r = m;
		else
			l = m;
	}
	return r;
}
int main()
{
	int i,j,n=9;
	int A[9] = { 2, 5, 3, 7, 11, 8, 10, 13, 6 };
	vector<int> a;
	for(i=0;i<9;i++)
	{
		a.push_back(A[i]);
	}
	int tail[n],prev[n];
	prev[0]=-1;
	tail[0]=0;
	int len=1;
	for(i=0;i<n;i++)
	{
		if(a[i]<a[tail[0]])
			tail[0]=i;
		else if(a[i]>a[tail[len-1]])
		{
			tail[len]=i;
			len++;
			prev[i]=tail[len-2];
		}
		else
		{
			int p;
	printf("len=%d\n",len);
			p = bs(a,tail,-1,len-1,a[i]);
			tail[p]=i;
			prev[i]=tail[p-1];
		}
	}
	printf("len\n");
	for(int i = tail[len-1];i>=0;i=prev[i])
	{
		printf("%d ",a[i]);
	}
	printf("\n");
	/*int sum[n];
	sum[0]=1;
	for(i=1;i<n;i++)
	{
		sum[i]=1;
		for(j=i-1;j>=0;j--)
		{
			if(sum[i] < sum[j]+1 && A[j]<A[i])
				sum[i]=sum[j]+1;
		}
	}
	int max=sum[0];
	for(i=1;i<n;i++)
		if(sum[i]>max)
			max =sum[i];
	printf("%d\n",max);*/
	return 0;
}
