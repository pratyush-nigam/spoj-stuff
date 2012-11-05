#include<cstdio>
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void kruskal(vector<pair<int, pair<int,int> > > a,int n, int m, int k)
{
	vector<int> b;
	int i,it[n],req=0;
	long long int cost=0;
	for(i=0;i<n;i++)
		it[i]=i;
	i=0;
	int c,d;
	while(i<m)
	{
		c = a[i].second.first;
		while(c!=it[c])
			c = it[c];
		d = c;
		c = a[i].second.second;
		while(c!=it[c])
			c = it[c];
		if(d<c)
		{
			int tmp = d;
			d = c;
			c = tmp;
		}
		if(c!=d)
		{
			it[d] = c;
			b.push_back(a[i].first);
			cost = cost + a[i].first;
		}
		i++;
	}
	i = 0;
	while(i<n){
		if(it[i]==i)
			req++;
		i++;
	}
	if(req>k){
		cout << "Impossible" << endl;
		return;
	}	
	else
	{
		std::sort(b.begin(),b.end());
		for(i=b.size()-1;i>=0;i--)
		{
			if(k==req)
				break;
			req++;
			cost = cost - b[i];
		}
	}
	cout << cost << endl;
	return;
}

int main()
{
	int g;
	scanf("%d",&g);
	while(g--)
	{
		int n,m,k,i;
		scanf("%d%d%d",&n,&m,&k);

		vector<pair<int, pair<int,int> > > a;
		for(i=0;i<m;i++){
			int x,y,z;
			scanf("%d%d%d",&x,&y,&z);
			a.push_back(make_pair(z,make_pair(x-1,y-1)));
		}
		std::sort(a.begin(),a.end());
		kruskal(a,n,m,k);
	}
	return 0;
}
