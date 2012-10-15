#include<cstdio>
#include<algorithm>
using namespace std;

int dp(int a[],int n,int i,int prev,int count)
{
	if(i==n)
		return count;
	if(a[i]>prev)
		return max(dp(a,n,i+1,a[i],count+1),dp(a,n,i+1,prev,count));
	else
		return dp(a,n,i+1,prev,count);
}

int main()
{
	int a[16] = {0,8,4,12,2,10,6,14,1,9,5,13,3,11,7,15};
	printf("%d\n",dp(a,16,0,-1,0));
	return 0;
}
