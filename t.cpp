#include<vector>
#include<cstdio>
#include<algorithm>
using namespace std;

int main()
{
	int g,i;
	scanf("%d",&g);
	i=g;
	vector<pair<int,int> > v;
	while(g--)
	{
		int n,m;
		scanf("%d%d",&n,&m);
		v.push_back(make_pair(n,m));
	}
	int j=0;
	sort(v.begin(),v.end());
	while(j<i)
	{
		printf("%d %d\n",v[j].first,v[j].second);
		j++;
	}
	return 0;
}

