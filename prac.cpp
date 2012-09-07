#include <stdio.h>
#include <vector>
#include <stack>
#include <queue>
#include <map>
using namespace std;
int main()
{
	stack<int> s;
	vector<int> v;
	for(int j=1; j<10; j++)
	{
		v.push_back(j);	
		s.push(j);
	}
	int i = s.top();
	v.pop_back();
	printf("%d %d %d\n",v.at(2),v.size(),i);
	return 0;
}
