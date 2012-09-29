#include<cstdio>
#include<string>
#include<iostream>
using namespace std;

int main()
{
	int g;
	scanf("%d",&g);
	while(g--)
	{
		string s;
		cin >> s;
		int i,n;
		n = s.size();
		int s1[n];
		for(i=0;i<n;i++)
		{
			if(s[i]=='4')
				s[i] = 0;
			else
				s[i] = 1;	
		}
		int c=0,a;
		i=n-1;
		int s2[n+2],flg=0;
		while(i>=0)
		{
			if(flg==0)
			{
				flg=1;
				a = (s1[i]+1)%2;
				c = (s1[i]+1)/2;
			}
			else
			{
				a = (s1[i]+1)%2;
				c = (s1[i]+1)/2;
			}
			if(a%2==0)
				s2[i] = 1;
			else
				s2[i] = 7;	
			i--;
		}
		if(c)
		{
			s2 = 4;
		}
		else
			s2 = 7;
	}
	return 0;
}
