#include<set>
#include<vector>
#include<map>
#include<iostream>
#include<cstdio>
using namespace std;

int balance

int main()
{
	vector<vector<int> > v;
	int n,i;
	char c=' ';
	scanf("%d",&n);
	for(i=0;i<2*n;i++)
	{
		while(c!='\n')
		{
			int ni;
			scanf("%d%c",&ni,&c);
			v[i].push_back(ni);
		}
	}
	balance(v,1);
	
	return 0;
}
