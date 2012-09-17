#include<cstdio>
#include<vector>
#include<algorithm>
using namespace std;

int lis(vector<int> v)
{
	int i,j,max=0,sz=1;
	vector<int> s,dp;
	s.push_back(v[0]);
	for(i=1;i<v.size();i++)
	{
		if(v[i] < s[0])
		{
			s[0] = v[i];
			dp.push_back(1);
		}
		else if(v[i] > s[s.size()-1])
		{
			s.push_back(v[i]);
			dp.push_back(s.size());
		}
		else
		{
			int k = binary_search(s.begin(),s.end(),v[i]);
			s[k] = v[i];
			dp.push_back(k);
		}
	}
	for(i=0;i<s.size();i++)
		printf("%d ",s[i]);
	printf("\n");
	for(i=0;i<dp.size();i++)
	{
		if(max < dp[i])
			max = dp[i];
	}
	return max;
}

int main()
{
	int n;
	scanf("%d",&n);
	int i;
	vector<int> v;
	for(i=0;i<n;i++)
	{
		int x;
		scanf("%d",&x);
		v.push_back(x);
	}
	int y = lis(v);
	printf("%d\n",y);
}
