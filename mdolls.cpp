#include<vector>
#include<cstdio>
#include<algorithm>
using namespace std;

int main()
{
	int g;
	scanf("%d",&g);
	while(g--)
	{
		int n,i,j;
		scanf("%d",&n);
		vector<pair<int,int> > v;
		vector<int> a;
		for(i=0;i<n;i++)
		{
			a.push_back(0);
			int x,y;
			scanf("%d%d",&x,&y);
			v.push_back(make_pair(x,y));
		}
		sort(v.begin(),v.end());
		/*for(i=0;i<n;i++)
			printf("%d %d\n",v[i].first,v[i].second);*/
		i=0;
		while(i+1<v.size())
		{
			j=i+1;

			vector<pair<int,int> >::iterator iter;
			iter = v.begin()+i+1;
			while(iter != v.end())
			{
				iter = upper_bound(iter,v.end(),v[i]);
				//printf("--Trying to Insert %d %d into %d %d, a[j] = %d\n",v[i].first,v[i].second,iter->first,iter->second,a[j]);
				
				if(v[j].first > v[i].first && v[j].second > v[i].second && a[j]==0)
				{

					a[j] = 1;
					v.erase(v.begin()+i);
					a.erase(a.begin()+i);
					break;
				}
				else
					iter = iter + 1;
			}
			if(iter == v.end())
				i++;
		}
		printf("%d\n",v.size());
	}
	return 0;
}
