#include<stdio.h>
#include<iostream>
#include<vector>
#include<malloc.h>
using namespace std;
int min(int a,int b)
{
	//return ((a<b?a:b)<c)?(a<b?a:b):c;
	return (a<b)?a:b;
}
int main()
{
int t;
scanf("%d",&t);
for(int i=0;i<t;i++)
{
	int n,m;
	scanf("%d %d",&n,&m);
	char ad[4];
	if(i==0)
		gets(ad);
	vector<vector<int > >dist;
	for(int i=0;i<n+2;i++)
	{
		dist.push_back(vector<int >());
	}
	for(int i=0;i<n+2;i++)
	{
		for(int j=0;j<m+2;j++)
			dist[i].push_back(999);
	}

	for(int i=0;i<n;i++)
	{
		char arr[m+1];
		scanf("%s",arr);
		for(int j=0;j<m;j++)
		{
			if(arr[j]=='1')
			{
				dist[i+1][j+1]=0;
			}
		}
	}
/*	for(int i=0;i<n+1;i++)
	{
		for(int j=0;j<m+1;j++)
		{
			printf("%d ",dist[i][j]);
		}
		printf("\n");
	}*/
	for(int i=1;i<n+1;i++)
	{
		for(int j=1;j<m+1;j++)
		{
			if(dist[i][j]!=0)
			{
				int temp=min(dist[i-1][j],dist[i][j-1]);
				if(temp<dist[i][j])
				{
					if(temp>dist[i-1][j-1])
						dist[i][j]=dist[i-1][j-1]+2;
					else
						dist[i][j]=temp+1;
				}
			}
		}
	}
/*	cout<<endl;
	for(int i=1;i<n+1;i++)
	{
		for(int j=1;j<m+1;j++)
		{
			printf("%d ",dist[i][j]);
		}
		printf("\n");
	}
	cout<<endl<<endl;*/
	for(int i=n;i>0;i--)
	{
		for(int j=m;j>0;j--)
		{
			if(dist[i][j]!=0)
			{
				int temp=min(dist[i][j+1],dist[i+1][j]);
				if(temp<dist[i][j])
				{
					if(temp>dist[i+1][j+1])
						dist[i][j]=dist[i+1][j+1]+2;
					else
						dist[i][j]=temp+1;
				}
			}
		}
	}
	for(int i=1;i<n+1;i++)
	{
		for(int j=1;j<m+1;j++)
		{
			printf("%d ",dist[i][j]);
		}
		printf("\n");
	}
}
}



