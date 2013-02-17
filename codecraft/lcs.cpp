#include<cstdio>
#include<algorithm>
#include<vector>
using namespace std;

int lcs( vector<int> X, vector<int> Y, int m, int n )
{
	int L[m+1][n+1];
	int i, j;

	for (i=0; i<=m; i++)
	{
		for (j=0; j<=n; j++)
		{
			if (i == 0 || j == 0)
				L[i][j] = 0;

			else if(X[i-1] == Y[j-1])
				L[i][j] = L[i-1][j-1] + 1;

			else
				L[i][j] = max(L[i-1][j], L[i][j-1]);
		}
	}

	return L[m][n];
}

int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n;
		scanf("%d",&n);
		vector<int> a,b;
		for(int i=0;i<n;i++)
		{
			int x;
			scanf("%d",&x);
			a.push_back(x);
		}
		for(int i=0;i<n;i++)
		{
			int x;
			scanf("%d",&x);
			b.push_back(x);
		}
		int ans = lcs(a,b,n,n);
		printf("%d\n",n-1);
	}
	return 0;
}
