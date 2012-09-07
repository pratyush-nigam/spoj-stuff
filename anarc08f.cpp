#include<iostream>
#include<cstdio>
#include<vector>
#include<map>
#include<cstring>
using namespace std;

/*int dijsktra(edge e[], int n, char *st, char *dest)
{
	int i,j,c=0;
	vertex d[n];
	for(i=0;i<n;i++)
	{
		int flag=0;
		for(j=0;j<c;j++)
		{ 
			if(strcmp(e[i].st,d[j].st)==0)//check if it is not there, if not put it there with distance inf
			{
				flag=1;
				break;
			}		
		}
		if(flag==0)
		{
			strcpy(d[c].st,e[i].st);
			if(strcmp(st,d[c].st)==0)
				d[c].d=0;
			else
				d[c].d = 1000000;
			c++;
		}
	}
	//printf("%d\n",c);
	//for(j=0;j<c;j++)
	//	printf("%s %d\n",d[j].st,d[j].d);
	int vis[c];
	for(i=0;i<c;i++)
		vis[i]=0;
	i=0;
	while(i<c)	
	{
		vertex min;	
		int ind,k=0,w;
		min.d = 1000000;
		for(j=0;j<c;j++)
		{
			if(vis[j]==0 && min.d>=d[j].d)
			{
				min = d[j];
				ind = j;
			}
		}//found min distance node
		if(min.d==1000000)
			break;
		if(strcmp(min.st,dest)==0)
			return min.d;
		vis[ind]=1;
		for(k=0;k<n;k++)
		{
			if(strcmp(e[k].st,min.st)==0)
			{
				int alt = e[k].d+min.d;
				for(j=0;j<c;j++)
				{
					if(strcmp(e[k].dest,d[j].st)==0)
						break;
				}
				if(alt < d[j].d)
					d[j].d = alt;
			}
		}
	}
	return 0;
}*/

int main()
{
	int n,c,r,k=1;
	scanf("%d %d %d",&n,&c,&r);
	while(n!=0 || c!=0 || r!=0)
	{
		int i;
		map<string, pair<string, int> > edge;
		vector<string> cars;
		string tow;
		scanf("%s",tow);
		for(i=0;i<c;i++)
			scanf("%s",);
		int es=0;
		edge e[2*r];
		for(i=0;i<r;i++)
		{
			char n1[11],n2[11],l[11];
			int f1=0,f2=0,j=0,num=0;
			scanf("%s %s %s",n1,l,n2);
			//printf("%s %s\n",n1,n2);
			while(j<strlen(l))
			{
				if(isdigit(l[j]))
					num = num*10 + (l[j]-'0');
				else if(l[j]=='>')
					f1=1;
				else if(l[j]=='<')
					f2=1;
				j++;
			}
			if(f1==1)
			{
				strcpy(e[es].st,n1);
				strcpy(e[es].dest,n2);
				e[es].d = num;
				es++;
			}
			if(f2==1)
			{
				strcpy(e[es].st,n2);
				strcpy(e[es].dest,n1);
				e[es].d = num;
				es++;
			}
			
		}
		//for(i=0;i<es;i++)
		//	printf("%s %s %d\n",e[i].st,e[i].dest,e[i].d);
		/*int total=0;
		for(i=0;i<c;i++)
		{
			total = total + dijsktra(e,es,tow,st[i].s) + dijsktra(e,es,st[i].s,tow);
		}
		printf("%d. %d\n",k,total);
		k++;
		scanf("%d %d %d",&n,&c,&r);*/
	}	
	
	return 0;
}
