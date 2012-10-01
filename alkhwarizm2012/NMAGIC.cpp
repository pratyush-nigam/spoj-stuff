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
				s1[i] = 0;
			else
				s1[i] = 1;	
		}
		int c=0,a;
		i=n-1;
		string s2 = "";
		int flg=0;
		while(i>=0)
		{
			cout << "s[i]  = " << s[i] << endl; 
			if(flg==0)
			{
				flg=1;
				a = (s1[i]+1)%2;
				c = (s1[i]+1)/2;
			}
			else
			{
				a = (s1[i]+c)%2;
				c = (s1[i]+c)/2;
			}
			cout << i << " = " <<  a << " " << s2 << endl;
			if(a==0)
				s2 = '4' + s2;
			else
				s2 = '7' + s2;	
			i--;
		}
		if(c==1)
		{
			s2 = s2 + '4';
		}
		/*else
			s2 = s2 + '7';*/
		cout << s2 << endl;
	}
	return 0;
}
