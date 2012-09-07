#include <set>
#include <map>
#include <vector>
#include <cstdio>
using namespace std;

int main()
{
	int f=1,g;
	scanf("%d",&g);
	while(f<=g)
	{
		int nbugs,nint,i,flag=0;
		scanf("%d %d",&nbugs,&nint);
		set<int> s1,s2;
		map<int, vector<int> > m;
		int s[nbugs+1];
		for(i=1;i<=nbugs;i++)
			s[i]=-1;
		for(i=0;i<nint;i++)
		{
			int x,y;
			scanf("%d %d",&x,&y);
			m[x].push_back(y);
			m[y].push_back(x);
		}
		for(i=1;i<=nbugs;i++)
		{
			int j;
			if(m.find(i)!=m.end())
			{
				if(s[i]!=1)
				{
					s[i]=0;
					for(j=0;j<m[i].size();j++)
					{
						if(s[m[i][j]]==0)
						{
							flag = 1;
							break;
						}
						else
							s[m[i][j]]=1;
					}
				}
				else
				{
					for(j=0;j<m[i].size();j++)
					{
						if(s[m[i][j]]==1)
						{
							flag=1;
							break;
						}
						else
							s[m[i][j]]=0;
					}
				}
				if(flag==1)
					break;
			}
		}



			/*if((s2.find(x)!=s2.end() && s2.find(y)!=s2.end())||(s1.find(x)!=s1.end() && s1.find(y)!=s1.end()))
			{
				flag =1;
				break;
			}
			else
			{
				if(s1.find(x)==s1.end() && s2.find(x)==s2.end())//doesnt exist in both
				{ 
					if(s2.find(y)==s2.end() && s1.find(y)==s1.end())
					{
						s1.insert(x);
						s2.insert(y);
					}
					else if(s2.find(y)!=s2.end())
						s1.insert(x);
					else if(s1.find(y)!=s1.end())
						s2.insert(x);
				}
				else if(s1.find(x)!=s1.end()){//exists in s1
					if(s2.find(y)==s2.end())
						s2.insert(y);
				}
				else if(s2.find(x)!=s2.end())//exists in s2
				{
					if(s1.find(y)==s1.end())
						s1.insert(y);
				}
			}

		}*/
		if(flag==0)
			printf("Scenario #%d:\nNo suspicious bugs found!\n",f);
		else
			printf("Scenario #%d:\nSuspicious bugs found!\n",f);
		f++;
	}
	return 0;
}
