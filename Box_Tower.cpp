/* Enter your code here. Read input from STDIN. Print output to STDOUT */

#include<cstdio>
#include<vector>
#include<map>
#include<climits>
#include<iostream>
#include<algorithm>
using namespace std;

typedef std::pair<pair<int,int>,int> box;

bool myfunction (box i,box j) 
{ 
	return (i.first.second*i.first.first<j.first.second*j.first.first); 
}

int main()
{
	vector<box> a;
	int n,i,j,m=INT_MIN;
	cin >> n;
	for(i=0;i<n;i++)
	{
		box t,x,y;
		cin >> t.first.first >> t.first.second >> t.second;
		if(t.first.first < t.first.second)
		{
			swap(t.first.first,t.first.second);
		}
		a.push_back(t);
		x.second = t.first.second;
		x.first.first = max(t.second,t.first.first);
		x.first.second = min(t.second,t.first.first);
		a.push_back(x);
		y.second = t.first.first;
		y.first.first = max(t.second,t.first.second);
		y.first.second = min(t.second,t.first.second);
		a.push_back(x);
	}
	/*printf("**************\n");
	for(i=0;i<a.size();i++)
		printf("%d %d %d\n",a[i].first.first,a[i].first.second,a[i].second);
	printf("**************\n");
	*/
	std::sort(a.begin(),a.end(),myfunction);
	std::reverse(a.begin(),a.end());
	for(i=0;i<a.size();i++)
		printf("%d = %d x %d x %d\n",i,a[i].second,a[i].first.first,a[i].first.second);
	vector<int> v;
	//map<int,int> m;
	n = 3*n;
	for(i=0;i<n;i++){
		v.push_back(a[i].second);
	}
	//m[0]=1;
	for(i=1;i<n;i++)
	{
		int ind;
		for(j=0;j<i;j++)
		{
			if(a[i].first.second <= a[j].first.second && a[i].first.first <= a[j].first.first && v[i] < v[j] + a[i].second)
			{
				v[i] = v[j] + a[i].second;
				/*printf("(%d %d %d) (%d %d %d) %d\n",a[i].first.first,a[i].first.second,a[i].second,a[j].first.first,a[j].first.second,a[j].second,v[i]);*/
			}
		}
	}
	for(i=0;i<n;i++)
		if(m < v[i])
			m = v[i];
	cout << m << endl;
	return 0;
}
