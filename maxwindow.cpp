#include<cstdio>
#include<vector>
#include<queue>

vector<int> maxwindow(vector<int> v, int k)
{
	vector<int> res;
	queue<int> q;
	int i = 0,k1=0;
	while(i<v.size())
	{
		if(k1=k)
		{
			q.pop();
		}
		while(q.rear()<v[i])
			q.pop()
				q.push(v[i]);
		if(i>=k)
		res.push_back(q.front());
		i++;
	}
	return res;
}

int main()
{
	int a[7] = {3,4,9,7,8,6,5};
}
