#include<cstdio>
#include<iostream>
#include<string>
using namespace std;

int main()
{
	string s = "batab",max="";
	int i;
	int a[26]={0};
	string st = "";
	for(i=0;i<s.size();i++)
	{
		if(a[s[i]-'a']==0)
		{
			st = st + s[i];
			a[s[i]-'a'] = i+1;
		}
		else
		{
			if((st.size() == xax.size() && max < st) || st.size()>max.size())
			{
				max = st;
				st = st.substr(a[s[i]-'a']) + s[i];
				a[s[i]-'a'] = i;
			}

		}
	}
	cout << max << endl;
}
