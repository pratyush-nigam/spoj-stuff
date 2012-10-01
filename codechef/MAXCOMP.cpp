#include<cstdio>
#include<algorithm>
#include<vector>
using namespace std;

typedef std::pair<int,int> p;

int dp(vector <pair<p,int> > v, int i, int sum,int prev)
{
	if(i==v.size())
		return sum;
	if(v[i].first.first >= prev)
	{
		return max(dp(v,i+1,sum + v[i].second, v[i].first.second),dp(v,i+1,sum,prev));
	}
	else
		return dp(v,i+1,sum,prev);
}

int main()
{
	int g;
	scanf("%d",&g);
	while(g--)
	{
		int n,i;
		scanf("%d",&n);
		vector<pair<p,int> > v;
		int c;
		for(i=0;i<n;i++)
		{
			int x,y;
			scanf("%d%d%d",&x,&y,&c);
			v.push_back(make_pair(make_pair(x,y),c));
		}
		sort(v.begin(),v.end());
		printf("%d\n",dp(v,0,0,-1));
	}
	return 0;
}
