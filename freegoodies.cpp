#include <cstring>
#include <vector>
#include <algorithm>
#include <cstdio>
#include <functional>
using namespace std;
int main()
{
	int g;
	scanf("%d",&g);
	while(g--)
	{
		int n,i;
		char s[6];
		scanf("%d",&n);
		scanf("%s",s);
		vector<pair<int,int> > v1,v2;
		for(i=0;i<n;i++)
		{
			int x,y;
			scanf("%d%d",&x,&y);
			v1.push_back(make_pair(x,y));
			v2.push_back(make_pair(y,x));
		}
		sort(v1.begin(),v1.end());//std::greater<int>());
		sort(v2.begin(),v2.end());//,std::greater<int>());
		for(i=0;i<v1.size();i++)
		{
			printf("%d %d\n",v2[i].first,v2[i].second);
		}
		int sum1=0,sum2=0;
		if(strcmp(s,"Petra")==0)
		{
			i=0;
			while(v1.size()>0)
			{
				if(i%2==1)
				{
					for(i=2;i<=v1.size();i++)
					{
						if(v1[v1.size()-i]!=v1[v1.size()-1])
							break;
					}	
					sum1+=();
				}
			}
		}
		else
		{
		}
	}
	return 0;
}
