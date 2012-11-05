#include<cstdio>
#include<iostream>
#include<string>
#include<vector>
#include<cmath>
#include<algorithm>
#include<bitset>
#include<sstream>
#include<cstdlib>
using namespace std;

vector<vector<int> > perm(vector<int> v, vector<vector<int> > t,vector<int> a)
{
	if(v.size()==0)
	{
		t.push_back(a);
		return t;
	}
	for(int i=0;i<v.size();i++)
	{
		a.push_back(v[i]);
		int y = v[i];

		v.erase(v.begin()+i);
		t= perm(v,t,a);
		v.insert(v.begin()+i,y);
		a.pop_back();
	}
	return t;
}

bool checkdate(int m, int d, int y)
{
	if (! (1<= m && m<=12) )
		return false;
	if (! (1<= d && d<=31) )
		return false;
	if ( (d==31) && (m==2 || m==4 || m==6 || m==9 || m==11) )
		return false;
	if ( (d==30) && (m==2) )
		return false;
	if ( (m==2) && (d==29) && (y%4!=0) )
		return false;
	if ( (m==2) && (d==29) && (y%400==0) )
		return true;
	if ( (m==2) && (d==29) && (y%100==0) )
		return false;
	if ( (m==2) && (d==29) && (y%4==0)  )
		return true;

	return true;
}

int numdigits(int num)
{
	int n = num,count=0;
	while(n>0)
	{
		count++;
		n/=10;
	}
	return count;
}

int main()
{
	string s;
	cin >> s;
	int i,num=0;
	vector<int> v;
	for(i=0;i<s.size();i++)
	{
		if(s[i]=='/')
		{
			v.push_back(num);
			num=0;
		}
		else
			num = num*10 + (s[i]-'0');
	}
	v.push_back(num);
	if(v.size()!=3)
	{
		cout << s << " is Illegal" << endl;
		return 0;
	}
	vector<int> a;
	vector<vector<int> > t;
	t = perm(v,t,a);
	vector<string> r;
	for(i=0;i<t.size();i++)
	{
		int y=t[i][0],m=t[i][1],d=t[i][2];
		if(y<1000)
			y = y + 2000;
		//cout << y << "-" << m << "-" << d << endl;
		if(checkdate(m,d,y))
		{
			stringstream out,o1,o2;
			string date="";
			out<<y;
			date = date + out.str();
			o1<<m;
			string mon = o1.str();
			if(numdigits(m)<2){
				date = date + "-0" + mon;
			}
			else
			{
				date = date + "-" + mon;
			}
			o2 << d;
			string di = o2.str();
			if(numdigits(d)<2){
				date = date + "-0" + di;
			}
			else{
				date = date + "-" + di;
			}
			r.push_back(date);
		}
	}	
	if(r.size()>0)
	{
		//for(i=0;i<r.size();i++)
		//	cout << r[i] << endl;
		sort(r.begin(),r.end());
		cout << r[0] << endl;
	}
	else
		cout << s << " is Illegal" << endl;
	return 0;
}
