#include<cstdio>
#include<vector>
#include<map>
#include<set>
#include<string>
#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;

void spiralPrint(vector<vector<int> > a)
{
	int n = a.size(),m=a[0].size();
	int vis[n][m],i=0,j=0;
	int flag = 1,c=0;

	for(i=0;i<n;i++)
		for(j=0;j<m;j++)
			vis[i][j]=0;
	i=j=0;
	printf("%d %d\n",n,m);
	while(c<n*m)
	{
		
		if(flag==1)
		{
			while(j<m && vis[i][j]==0)
			{
				printf("%d ",a[i][j]);
				vis[i][j] = 1;
				j++;
				c++;
			}
			j--;
			flag = 2;
			//printf("\n");
		}
		else if(flag==2)
		{
			while(i<n && vis[i][j]==0)
			{
				printf("%d ",a[i][j]);
				vis[i][j] = 1;
				i++;
				c++;
			}
			i--;
			flag = 3;
			//printf("\n");
		}
		else if(flag==3)
		{
			while(j>=0 && vis[i][j]==0)
			{
				printf("%d ",a[i][j]);
				vis[i][j] = 1;
				j--;
				c++;
			}
			j++;
			flag = 4;
			//printf("\n");
		}
		else if(flag==4)
		{
			while(i>=0 && vis[i][j]==0)
			{
				printf("%d ",a[i][j]);
				vis[i][j] = 1;
				i--;
				c++;
			}
			i++;
			flag=1;
			//printf("\n");
		}
	}
	printf("\n");
	return;
}


int main()
{
	int i,j,n,m;
	scanf("%d%d",&n,&m);
	vector<vector<int> > a;
	for(i=0;i<n;i++)
	{
		vector<int> v;
		for(j=0;j<m;j++)
		{
			int x;
			scanf("%d",&x);
			v.push_back(x);
		}
		a.push_back(v);
	}
	printf("l1i1\n");	
	spiralPrint(a);
	return 0;

}
