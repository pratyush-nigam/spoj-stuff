#include<stdio.h>
#include<iostream>
#include<queue>
#include<algorithm>
#include<vector>
#define MAX 900000000
using namespace std;

typedef pair<int,int> Pair ; 

//int cost.c[200010] ; 
vector<Pair> v[200010] ;
int check[200010] ; 

typedef struct node
{
	int c[200010];
}node;

int main()
{
	int n , e, s, d ; 
	int a , b, cs ; 
	
	scanf("%d%d",&n,&e);
	int i ; 

	for(i = 0 ; i < e ; i++)
	{
		scanf("%d%d%d",&a,&b,&cs);
		v[a].push_back(Pair(b,cs));
		v[b].push_back(Pair(a,cs));
	}
	node ini,cost;
	for(i = 0 ; i <=n ; i++){
			ini.c[i] = MAX;
	}
	scanf("%d %d",&s, &d);
	int t;
	scanf("%d",&t);
	while(t>0)
	{
		scanf("%d %d",&a,&b);
		cost = ini;
		cost.c[s] = 0 ;
		check[s] = 1; 
	
		priority_queue<Pair , vector<Pair> , greater<Pair> > q ; 
		q.push(Pair(0,s));
	
		Pair temp ; 
		int val ; 
		int node ; 
		int l ; 
		while(!q.empty())
		{
			node = q.top().second;
			val = q.top().first ; 
			q.pop();

			if(val <= cost.c[node])
			{
				l = v[node].size();
				for(i = 0 ; i < l ; i++)
				{
					if((v[node][i].first != a || node!=b) && (v[node][i].first != b || node!=a))
					if(val + v[node][i].second < cost.c[v[node][i].first])
					{
						cost.c[v[node][i].first] = val + v[node][i].second ;
						q.push(Pair (cost.c[v[node][i].first] , v[node][i].first));
					}
				}
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
