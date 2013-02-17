#include<cstdio>
#include<string>
#include<vector>
#include<iostream>
#include<stack>
#include<set>
using namespace std;
bool dfs(vector<string> a,int n)
{
	int i,j;
	stack<pair<int,int> > q;
	q.push(make_pair(0,0));
	set<pair<int,int> > s;
	s.insert(make_pair(0,0));

	while(!q.empty())
	{
		pair<int,int> p;
		p = q.top();
		//printf("%d %d\n",p.first,p.second);
		q.pop();
		if(p.first == n-1 && p.second == n-1)
			return 1;
		if(p.first-1 >= 0 && a[p.first-1][p.second]!='D' && s.find(make_pair(p.first-1,p.second))==s.end())
		{
			q.push(make_pair(p.first-1,p.second));
			s.insert(make_pair(p.first-1,p.second));
		}
		if(p.second-1 >= 0 && a[p.first][p.second-1]!='D' && s.find(make_pair(p.first,p.second-1))==s.end())
		{
			q.push(make_pair(p.first,p.second-1));
			s.insert(make_pair(p.first,p.second-1));
		}
		if(p.first+1 < n && a[p.first+1][p.second]!='D' && s.find(make_pair(p.first+1,p.second))==s.end())
		{
		//	printf("lol\n");
			q.push(make_pair(p.first+1,p.second));
			s.insert(make_pair(p.first+1,p.second));
		}
		if(p.second+1 < n && a[p.first][p.second+1]!='D' && s.find(make_pair(p.first,p.second+1))==s.end())
		{
		//	printf("lol1\n");
			q.push(make_pair(p.first,p.second+1));
			s.insert(make_pair(p.first,p.second+1));
		}
	}
	return 0;
}
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int i,n;
		scanf("%d",&n);
		vector<string> a;
		for(i=0;i<n;i++)
		{
			string s;
			cin >> s;
			a.push_back(s);
		}
		if(dfs(a,n))
			printf("YES\n");
		else
			printf("NO\n");
	}
	return 0;
}
