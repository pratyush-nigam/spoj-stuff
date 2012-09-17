#include<cstdio>
#include<vector>
#include<cstdlib>
using namespace std;

int findkthsmallest(vector<int> a, int k)
{
	int i;
	if(a.size()==1)
		return a[0];
	vector<int> l,r,eq;
	int pivot = a[a.size()-1];
	eq.push_back(pivot);
	for(i=0;i<a.size()-1;i++)
	{
		if(a[i] < pivot)
			l.push_back(a[i]);
		else if(a[i] > pivot)
			r.push_back(a[i]);
		else
			eq.push_back(a[i]);
	}
	if(l.size() == k)
		return l[l.size()-1];
	else if(l.size() < k && l.size()+eq.size() >= k)
		return eq[0];
	else if(l.size()+eq.size() < k)
		return findkthsmallest(r,k-(l.size()+eq.size()));

}

int main()
{
	vector<int> a;

	int i,k=7;
	for(i=10;i>=1;i--){
		a.push_back(rand()%100);
		printf("%d ",a[a.size()-1]);
	}
	printf("\n");
	printf("%d\n",findkthsmallest(a,k));
	return 0;
}
