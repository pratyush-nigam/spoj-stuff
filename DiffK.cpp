#include<cstdio>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
	int i,j;
	vector<int> v;
	vector<pair<int,int> > a;
	for(i=0;i<10;i++)
		v.push_back(i+1);
	i=j=0;
	int k = 5;
	std::sort(v.begin(),v.end());
	while(i<v.size())
	{
		while(i< v.size() && v[i]-v[j] < k)
			i++;
		if(v[i]-v[j]==k)
		{
			printf("%d %d\n",v[i],v[j]);
			a.push_back(make_pair(v[i],v[j]));
			i++;
		}
		else if(v[i]-v[j]>k)
			j++;
		else
			break;
	}
	return 0;
}
