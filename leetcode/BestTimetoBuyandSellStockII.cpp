#include<cstdio>
#include<algorithm>
#include<vector>
using namespace std;

int dp(vector<int> a, int i,int prev,int f,int sum)
{
	if(i==a.size())
		return sum;
	if(f==0)//buy
		return max(dp(a,i+1,i,1,sum),dp(a,i+1,prev,f,sum));
	if(f == 1)//sell
	{
		printf("cur=%d prev=%d f=%d\n",a[i],a[prev],f);
		if(a[i]-a[prev] > 0)
			return max(dp(a,i+1,i,0,sum+(a[i]-a[prev])),dp(a,i+1,prev,f,sum));
		else
			return dp(a,i+1,prev,f,sum);
	}
}
int maxProfit(vector<int> &prices) {
	// Start typing your C/C++ solution below
	// DO NOT write int main() function
	if(prices.size()<2)
		return 0;
	return dp(prices,0,0,0,0);
}

int main()
{
	vector<int> v;
	v.push_back(1);
	v.push_back(2);
	printf("%d\n",maxProfit(v));
}
