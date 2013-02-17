#include<cstdio>
#include<string>
#include<iostream>
#include <algorithm>
#include <cstdlib>
using namespace std;

long long dp[100][100];
#define M 1000000007

long long nCr(int n, int r)
{
	if(n==r) return dp[n][r] = 1;
	if(r==0) return dp[n][r] = 1;
	if(r==1) return dp[n][r] = (long long)n;
	if(dp[n][r]) return dp[n][r];
	return dp[n][r] = (nCr(n-1,r) + nCr(n-1,r-1))%M;
}

int checkpalindrome(string s)
{
	int i=0,j=s.size()-1;
	while(i<j)
	{
			printf("%c %c\n",s[i],s[j]);
		if(s[i]!=s[j])
		{
			printf("%c %c\n",s[i],s[j]);
			return 0;
		}
		i++;
		j--;
	}
	return 1;
}

int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int count=0,ans=0,i,n,flg=0;
		string s;
		cin >> s;
		n = s.size();
		/*if(n%2==1)
			flg=1;*/
		count = n;
		if(n <= 2)
			printf("%d\n",0);
		else
		{
			for(i=1;i<=count;i++)
			{
				ans = ans + nCr(count,i);
			}
			ans = (ans*2)%M;
			/*if(flg==1)
				ans*=2;*/
			printf("%d\n",ans%M);
		}
	}
	return 0;
}
