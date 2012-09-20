#include<vector>
#include<set>
#include<cstdio>
using namespace std;
int dp(int n, int m, vector<vector <int> >  a, int k, int c, set<int> s,int i)
{
	//printf("lol\n");
	if(c == k)
		return 1;
	if(i==n)
		return 0;
	int j,count = 0;
	count += dp(n,m,a,k,c,s,i+1);
	for(j=0;j<n;j++)
	{
		if(a[i][j]==1 && s.find(j)==s.end())
		{
			s.insert(j);
			count += dp(n,m, a, k,c+1,s,i+1);
			s.erase(s.find(j));
		}
	}
	return count;
}
int main()
{
	int g;
	scanf("%d",&g);
	while(g--)
	{
		int i,j,n,m,k;
		scanf("%d%d%d",&n,&m,&k);
		vector<vector<int> > a;
		for(i=0;i<n;i++)
		{
			vector<int> p;
			for(j=0;j<m;j++){
				int x;
				scanf("%d",&x);
				p.push_back(x);
			}
			a.push_back(p);
		}
		printf("");
		set<int> s;
		int y = dp(n,m,a,k,0,s,0);
		printf("%d\n",y);
	}
	return 0;
}
