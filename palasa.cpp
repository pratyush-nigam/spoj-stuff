#include<iostream>
#include<cstdio>
#include<vector>
#include<queue>
using namespace std;

int main()
{
	int n,i,e,s,d;
	scanf("%d%d%d%d",&n,&e,&s,&d);
	int cost[112345];
	for(i=0;i<=n;i++)
		cost[i]=100000000;
	vector< pair<int,int> > edge[112345];
	for(i=0;i<e;i++)
	{
		int a,b,c;
		scanf("%d%d%d",&a,&b,&c);
		edge[a].push_back(make_pair(b,c));
		edge[b].push_back(make_pair(a,c));
	}
	queue< pair <int,int> >	q;
	q.push(make_pair(s,0));
	while(!q.empty())
	{
		pair<int,int> c;
		c = q.front();
		q.pop();
		int r = c.second;
		int x = c.first;
		if(r >= cost[x])
			continue;
		cost[x] = r;
		int s = edge[x].size();
		for(i=0;i<s;i++)
		{
			pair <int,int> y = edge[x][i+1];
			q.push(make_pair(y.first , y.second + r));
		}	
	}
	printf("%d\n",cost[d]);
	return 0;
}
