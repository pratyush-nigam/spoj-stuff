#include<cstdio>
#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	int n;
	cin >> n;
	while(n!=0)
	{
		int i,j,a[n],sum[n],w[n];
		for(i=0;i<n;i++)
		{
			sum[i]=0;
			cin >> a[i];
		}
		for(i=0;i<n;i++)
		{
			cin >> w[i];
		}
		int m;
		m=sum[0]=w[0];
		//int sum[n]
		for(i=0;i<n;i++)
		{
			for(j=0;j<i;j++)
			{
				if(w[i]+sum[j] > sum[i] && a[i]>a[j])
				{
					sum[i] = w[i] + sum[j];
					m = max(m,sum[i]);
				}
			}
		}
		printf("%d\n",m);
		cin >> n;
	}
	return 0;
}
