#include<queue>
#include<cstdio>
#include<vector>
#include<iostream>
using namespace std;

int main()
{
	int n = 6;
	int a[6] = {2, 6, 3, 12, 56, 8};
	int k = 3,i;
	vector<int> v;
	priority_queue<int, vector<int>,greater<int> > h;
	for(i=0;i<k;i++)
		h.push(a[i]);
	for(i=0;i<n;i++)
	{
		v.push_back(h.top());
		h.pop();
		if(i+k < n)
			h.push(a[i+k]);
	}
	for(i=0;i<n;i++)
		printf("%d ",v[i]);
	printf("\n");
}
