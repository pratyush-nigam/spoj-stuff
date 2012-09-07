#include<cstdio>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
	int maxPeriod = 2;
	vector<string> dna;
	dna.push_back("ACGTGCA");
	string s;
	int m=1000000000;
	int i,j,k;
	for(i=0;i<dna.size();i++)
		s.append(dna[i]);
	if(s.size()<maxPeriod)
		return 0;
	else
	{

		for(i=1;i<=maxPeriod;i++)
		{
			string st;
			for(j=0;j<s.size()-i;j++)
			{
				st.append(s.substr(j,i));
				printf("%s ",st.c_str());
				k=j-1;
				int y = 1,count=0;
				while(k>=0)
				{
					if(st[i-y]!=s[k])
						count++;
					k--;
					y++;
					if(y>i)
						y=1;
				}
				k=j+i;
				y=0;
				while(k<s.size())
				{
					if(st[y]!=s[k])
						count++;
					y++;
					k++;
					if(i==y)
						y=0;
				}
				printf("%d\n",count);
				m = min(m,count);
				st.clear();
			}
		}
		printf("%d\n",m);
	}		
	return 0;
}
