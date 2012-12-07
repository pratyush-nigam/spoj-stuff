#include<vector>
#include<set>
#include<iostream>
#include<cstdio>
using namespace std;

int main()
{
	vector<pair<set<int>::iterator,set<int>::iterator> > v;
	set<int> s,s1;
	s.insert(1);
	s.insert(2);
	s1.insert(2);
	v.push_back(make_pair(s.begin(),s.end()));
	v.push_back(make_pair(s1.begin(),s1.end()));
	int i;
	for(i=0;i<v.size();i++)
	{
		set<int>::iterator j;
		for(j=v[i].first;j!=v[i].second;j++)
		{
			printf("%d\n",*j);
		}
	}
	return 0;
}
