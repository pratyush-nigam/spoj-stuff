#include<cstdio>
#include<iostream>
#include<vector>
#include<queue>
#include<string.h>
using namespace std;

int main()
{
	typedef std::vector <char *> vc;
	typedef std::vector< pair<char *, vc> > vc1;
	char s[10000],a[10000];
	vc nd;
	vc1 vcc;
	int f = 1;
	int k;
	while(scanf("%s",s)!=EOF)
	{
		strcpy(a,s);
		vc v;
		printf("%s->",a);
		int flag = 0;
		while(1)
		{

			if(scanf("%s",s)==EOF){
				f=0;
				break;	
			}
			if(strcmp("0",s)==0)
				break;
			else
			{
				//printf("%s\n",s);
				v.push_back(s);
			for(k=0;k<v.size();k++)
				printf(" %d %s ",k,v.at(k));
			printf("\n");
			
				//printf("%s\n",v.at(v.size()-1));
			}
		}
		if(f==0)
			break;
		if(v.size() == 0){
			//printf("lol");
			nd.push_back(a);
		}
		else{
			for(k=0;k<v.size();k++)
				printf("%s ",v.at(k));
			printf("\n");
			vcc.push_back(make_pair(a,v));
		}
	}
	vc sorted;
	int i=0,j=0;
	while(nd.size()!=0)
	{
		char *n;
		n = nd[0];
		nd.erase(nd.begin());
		sorted.push_back(n);
		for(i=0;i<vcc.size();i++)
		{
			vc v;
			v = vcc[i].second;
			while(j<v.size())
			{
				if(strcmp(n,v[j])==0)
					v.erase(v.begin()+j);
				else
					j++;
			}
			if(v.size()==0){
				
				vcc.erase(vcc.begin()+i);
			}
		}
	}
	printf("%d\n",sorted.size());
	return 0;
}
