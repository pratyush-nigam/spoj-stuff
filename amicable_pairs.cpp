#include<cstdio>
#include<cmath>
#include<vector>
#include<set>
#include<iostream>
using namespace std;
int divsum(int num)
{
	int i,sum=1;
	for(i=2;i<=sqrt(num);i++)
	{
		if(num%i==0)
			sum+=((num/i) + i);
	}
	return sum;
}
int main()
{
	int g;
	scanf("%d",&g);
	int i;
	vector<pair<int,int> > s;
	for(i=2;i<=100000;i++)
	{
		int n = divsum(i);
		if(divsum(n)==i){
			int x,y;
			if(n>i)
			{
				x=n;
				y=i;
			}
			else
			{
				x=i;
				y=n;
			}

			int flag=0;
			for(int j=0;j<s.size();j++){
				if(s[j].first == x){
					flag=1;
					break;
				}
			}
			if(flag==0){
				
//					printf("%d %d\n",x,y);
				s.push_back(make_pair(x,y));
			}

		}
	}
	while(g--)
	{
		int n,j=0,count=0;
		scanf("%d",&n);
		while(j<s.size() && s[j].first<=n)
		{
			count++;
			j++;
		}
		printf("%d\n",count);
	}
	return 0;
}
