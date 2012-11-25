#include<vector>
#include<map>
#include<iostream>
#include<algorithm>
#include<string>
#include<set>
using namespace std;

int FindMaxSubset(const vector<string> &v)
{
	set<string> s;
	int i,c=0;
	for(i=0;i<v.size();i++)
	{
		string y = v[i];
		sort(y.begin(),y.end());
		if(s.find(y)==s.end())
		{
			s.insert(y);
			c++;
		}
	}
	return c;
}

int main()
{
	string a[5]={"abc","bca","cab","mno","iii"};
	int i;
	vector<string> v;
	for(i=0;i<5;i++)
		v.push_back(a[i]);
	cout << FindMaxSubset(v) << endl;
	return 0;
}
