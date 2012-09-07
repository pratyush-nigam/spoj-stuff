#include<stdio.h>
#include<vector>
using namespace std;
vector<int> match;
void tbrac(int li, int l)
{
	if(li>=l)
		return;
	int i,k=0;
	vector <int> n;
	for(i=(1<<li)+1;i<=1<<(li+1);i++)
	{
		n.push_back(match[k++]);
		n.push_back(i);
	}
	match=n;
	tbrac(li+1,l);
	return;
}

int main()
{
	match.push_back(1);
	tbrac(0,3);
	int i;
	for(i=0;i<match.size();i++)
		printf("%d ", match[i]);
	printf("\n");
	return 0;
}
