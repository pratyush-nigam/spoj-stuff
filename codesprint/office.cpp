#include<iostream>
#include<cstdio>
#include<vector>
#include<queue>
#define MAX 900000000
using namespace std;

#define MP make_pair
#define PB push_back

vector < pair <int,int> > edge[212345];

typedef struct node
{
	int c[200010];
}node;

int main()
{
	int n,e,s,d,j;
	scanf("%d %d",&n,&e);
	for(int i = 0;i<e; ++i)
	{
		int x,y,cs;
		scanf("%d %d %d",&x,&y,&cs);
		edge[x].PB(MP(y,cs));
		edge[y].PB(MP(x,cs));
	}
	node ini,cost;
	for(j = 0 ; j <=n ; j++){
			ini.c[j] = MAX;
	}
	scanf("%d %d",&s,&d);
	int t;
	scanf("%d",&t);
	while(t>0)
	{
		int a,b;
		scanf("%d %d",&a,&b);
		cost = ini;
		queue < pair <int,int> > q;
		q.push(MP(s,0));
		while(!q.empty())
		{
			//printf("%d\n",cost[d]);
			pair <int,int> cur = q.front(); q.pop();
			int x = cur.first, c = cur.second;
			if(cost.c[x] <= c) continue;
			cost.c[x] = c;
			int sz = edge[x].size();
			for(int i = 0;i<sz; ++i)
			{
				
				pair <int,int> pi = edge[x][i];
				if((pi.first != a || x!=b) && (pi.first != b || x!=a))
					q.push(MP(pi.first,pi.second + c));
			}
		}
		if(cost.c[d] == MAX)
			printf("Infinty\n");
		else
			printf("%d\n",cost.c[d]);
		t--;
	}
	return 0;
}
