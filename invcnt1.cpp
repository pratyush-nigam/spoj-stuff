#include<vector>
#include<algorithm>
#include<cstdio>
using namespace std;
long long int sum;
vector<int> mergesort(vector<int> v)
{
	int i,j,n=v.size();
	vector<int> a,b,r;

	for(i=0;i<n;i++)
	{
		if(i>n/2)
			b.push_back(v[i]);
		else
			a.push_back(v[i]);
	}
	a = mergesort(a.begin());
	b = mergesort(b.begin());
	i=j=0;
	while(i<a.size())
	{
		while(j<b.size())
		{
			if(a[i]<b[j])
				j++;
			else
				break;
		}
		sum+=j;
	}
	i=j=0;
	while(i<a.size() && j<b.size())
	{
		if(a[i]<=b[j])
		{
			r.push_back(a[i]);
			i++;
		}
		else
		{
			r.push_back(b[j]);
			j++;
		}
	}
	if(i==a.size())
		while(j<b.size())
		{
			r.push_back(b[j]);
			j++;
		}
	else
		while(i<a.size())
		{
			r.push_back(a[i]);
			i++;
		}
	return r;
}

int main()
{
	int g;
	scanf("%d",&g);
	while(g)
	{
		int n,i;
		scanf("%d",&n);
		vector<int> a;
		for(i=0;i<n;i++)
		{
			int y;
			scanf("%d",&y);
			a.push_back(y);
		}
		sum = 0;
		mergesort(a.begin());
		printf("%lld\n",sum);
		g--;
	}
	return 0;
}
