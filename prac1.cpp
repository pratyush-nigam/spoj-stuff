#include <stdio.h>
#include <list>
#include <queue>
#include <vector>
#include <priority_queue>
#include <map>
using namespace std;
int main()
{
	int i;
	typedef std::vector<int> V;	
	std::queue<V> q;
	priority_queue<int> p;
	
	for(i=0;i<10;i++)
	{
		V v;
		for(int j=0; j<=i;j++)
			v.push_back(j);
		p.push(10-i)
		q.push(v);
		v = q.back();
		//printf("%d\n",v.at(v.size()-1));
	}
	printf("%d\n",p.top());
	p.pop();
	printf("%d\n",p.top());
}
