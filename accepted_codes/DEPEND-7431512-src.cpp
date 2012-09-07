#include<vector>
#include<map>
#include<cstdio>
#include<string>
#include<iostream>
#include<set>
using namespace std;

int main()
{
	string si;
	char c[10000];
	set<string> v,s,l;
	map<string, set<string> > m,m1;
	map<string, set<string> >::iterator iter;
	set<string>::iterator it;
	int flag=1,count=0;
	//cin >> a;
	while(scanf("%s",c)!=EOF)
	{
		//cout << a;
		string a(c);
		if("0" == a){
			flag=1;
			if(count==0)
				s.insert(si);
			count = 0;
		}
		else{
			if(flag==1)
			{
				flag=0;
				si=a;
			}
			else{
				if(m[si].find(a) == m[si].end()){
					m[si].insert(a);
					m1[a].insert(si);
					count++;
				}
			}
		}
	}

	while(s.size()>0)
	{
		si=*s.begin();
		s.erase(s.begin());
		l.insert(si);
		string y;
		for(it = m1[si].begin();it!=m1[si].end();it++)
		//for(iter=m.begin();iter!=m.end();iter++)
		{
			//if(m[*it].find(si)!=m[iter->first].end())
			//{
				m[*it].erase(m[*it].find(si));
				if(m[*it].size()==0){
					s.insert(*it);
					m.erase(m.find(*it));
				}
			//}
				//m1.erase(it);
		}
		m1.erase(m1.find(si));
	}
	printf("%d\n",l.size());
	return 0;
}
