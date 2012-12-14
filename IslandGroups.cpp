#include<cstdio>
#include<vector>
#include<cstdlib>
#include<stack>
using namespace std;
int c = 1;
vector<vector<int> > dfs(vector<vector<int> > color,vector<vector<int> > a,int i,int j)
{
	//printf("%d %d\n",a[i][j],color[i][j]);
	if(a[i][j]==0 || color[i][j]>0)
		return color;
	
	//printf("lol\n");
	stack<pair<int,int> > s;
	s.push(make_pair(i,j));
	color[i][j]= c;
	while(!s.empty())
	{
		pair<int,int> p;
		p = s.top();
		//printf("->> %d %d\n",p.first,p.second);
		s.pop();
		if(p.first>0 && a[p.first-1][p.second]==1 && color[p.first-1][p.second]==0)
		{
			color[p.first-1][p.second]=c;
			s.push(make_pair(p.first-1,p.second));
		}
		if(p.second>0 && a[p.first][p.second-1]==1 && color[p.first][p.second-1]==0)
		{
			color[p.first][p.second-1]=c;
			s.push(make_pair(p.first,p.second-1));
		}
		if(p.first<a.size()-1 && a[p.first+1][p.second]==1 && color[p.first+1][p.second]==0)
		{
			color[p.first+1][p.second]=c;
			s.push(make_pair(p.first+1,p.second));
		}
		if(p.second<a[0].size()-1 && a[p.first][p.second+1]==1 && color[p.first][p.second+1]==0)
		{
			color[p.first][p.second+1]=c;
			s.push(make_pair(p.first,p.second+1));
		}
	}
	c++;
	return color;
}

int main()
{
	int i,j;
	vector<vector<int> > a,color;
	for(i=0;i<4;i++)
	{
		vector<int> b,c1;
		for(j=0;j<4;j++)
		{
			b.push_back(rand()%2);
			printf("%d ",b[j]);
			c1.push_back(0);
		}
		a.push_back(b);
		color.push_back(c1);
		printf("\n");
	}
		/*	int h,k;
			for(h=0;h<4;h++){
				for(k=0;k<4;k++)
					printf("%d ",color[h][k]);
				printf("\n");
			}*/
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
			color = dfs(color,a,i,j);
			int h,k;
			/*for(h=0;h<4;h++){
				for(k=0;k<4;k++)
					printf("%d ",color[h][k]);
				printf("\n");
			}
			printf("\n\n");*/
		}
	}
	printf("%d\n",c-1);	
}
