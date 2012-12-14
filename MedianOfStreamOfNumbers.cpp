#include<cstdio>
#include<queue>
using namespace std;
double findmedian(priority_queue<int> q1,priority_queue<int,vector<int>,greater<int> > q2,int k1,int k2)
{
	if(k1==k2)
	{
		double k = q1.top()+q2.top();
		return k/2;
	}
	else if(k1==k2+1)
	{
		double k = q1.top();
		return k;
	}
	else if(k1+1==k2)
	{
		double k = q2.top();
		return k;
	}
}
int main()
{
	priority_queue<int> q1;//max-heap
	priority_queue<int , vector<int>, greater<int> > q2;//min-heap
	int k1,k2;
	k1=k2=0;
	double last = 0.0;
	while(1)
	{
		int n;
		scanf("%d",&n);
		if(n > last)
		{
			q2.push(n);
			k2++;
			if(k2 > k1+1)
			{
				if((k1+k2)%2==0)
				{
					while(k2 > k1)
					{
						q1.push(q2.top());
						k1++;
						q2.pop();
						k2--;
					}
				}
				else
				{
					while(k2 > k1+1)
					{
						q1.push(q2.top());
						k1++;
						q2.pop();
						k2--;
					}
				}
			}
			last = findmedian(q1,q2,k1,k2);
			printf("%lf\n",last);
		}
		else
		{
			q1.push(n);
			k1++;
			if(k1>k2+1)
			{
				if((k1+k2)%2==0)
				{
					while(k1 > k2)
					{
						q2.push(q1.top());
						k2++;
						q1.pop();
						k1--;
					}
				}
				else
				{
					while(k1 > k2+1)
					{
						q2.push(q1.top());
						k2++;
						q1.pop();
						k1--;
					}
				}
			}
			last = findmedian(q1,q2,k1,k2);
			printf("%lf\n",last);
		}
	}
	return 0;
}
