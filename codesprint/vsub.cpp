#include <cstdio>
#include<stdlib.h>
#include <vector>
#include<algorithm>
#include<set>
using namespace std;
int a[200000];
int b[200000];
void lis(vector <int> A)
{
	int N = A.size(),i;
	set<int, greater<int> > s;
	set<int, greater<int> >::iterator k;
    	for (i=0;i<N;i++)
    	{
        	if (s.insert(A[i]).second)
        	{
          	 	k = s.find(A[i]);
           	 	k++;
           		if (k!=s.end())
             	 	s.erase(k);
        	}
		a[i] = (int)s.size();
    	}
	return;
}
void lisa(vector <int> A)
{
	int N = A.size(),i;
	set<int, greater<int> > s;
	set<int, greater<int> >::iterator k;
    	for (i=0;i<N;i++)
    	{
        	if (s.insert(A[i]).second)
        	{
          	 	k = s.find(A[i]);
           	 	k++;
           		if (k!=s.end())
             	 	s.erase(k);
        	}
		b[i] = (int)s.size();
    	}
	return;
}
 
int main()
{
	int n;
	scanf("%d",&n);
	vector <int> c;
	int i,f;
	vector <int> d;
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&f);
		c.push_back(f);
		d.push_back(f);
	}
	reverse(d.begin(),d.end());
	lis(d);
	lisa(c);
	int max=-1;
	for(i=0;i<n;i++)
	{
	//	printf("%d %d\n",a[i],b[n-i-1]);
		if(a[i]+b[n-i-1] > max && a[i]>1 && b[n-i-1]>1)
			max = a[i]+b[n-i-1];
	}
	if(max>0)
		printf("%d\n", max-1);
	else
		printf("0\n");
	return 0;
}


