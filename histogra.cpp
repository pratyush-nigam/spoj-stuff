#include <cstdio>
#include <vector>
#include <stack>
using namespace std;

typedef struct node
{
	long long int num;
	long long int ind;
}node;

int main()
{
	int n;
	scanf("%d",&n);
	while(n>0)
	{
		long long int i,j;
		node a[n];
		long long int b[n],c[n];
		for(i=0;i<n;i++){
			scanf("%lld",&a[i].num);
			a[i].ind = i;
		}
		stack<node> s;
		for(i=0;i<n;i++)
		{
			long long int t = a[i].ind;
			while(!s.empty() && s.top().num >= a[i].num){
				t = b[s.top().ind];
				s.pop();
				if(s.empty())
					t = 0;
			}
			b[i] = t;
			s.push(a[i]);
		}
		/*for(i=0;i<n;i++)
			printf("%lld ",b[i]);
		printf("\n");*/
		stack<node> s1;
		for(i=n-1;i>=0;i--)
		{
			long long int t = a[i].ind;
			while(!s1.empty() && s1.top().num >= a[i].num)
			{
				t = c[s1.top().ind];
				s1.pop();
				if(s1.empty())
					t = n-1;
			}
			c[i] = t;
			s1.push(a[i]);
		}
		/*for(i=0;i<n;i++)
			printf("%lld ",c[i]);
		printf("\n");*/
		long long int max=-1;
		for(i=0;i<n;i++)
		{
			//printf("%lld %lld\n",a[i].num,((c[i]-b[i])+1)*a[i].num);
			if(max < ((c[i]-b[i])+1)*a[i].num)
				max = ((c[i]-b[i])+1)*a[i].num;
		}
		printf("%lld\n",max);
		scanf("%d",&n);
	}
	return 0;
}
