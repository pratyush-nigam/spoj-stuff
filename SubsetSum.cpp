#include<cstdio>
#include<vector>
#include<algorithm>
using namespace std;

void dp(vector<int> v,int c,int i,int t,int a[],int n)
{
	if(t==c){
		for(int i = 0;i<v.size();i++)
			printf("%d ",v[i]);
		printf("\n");
		return;
	}
	if(t<c)
		return;
	if(i==n)
		return;
	dp(v,c,i+1,t,a,n);
	v.push_back(a[i]);
	dp(v,c+a[i],i+1,t,a,n);
	return;
}
int main()
{
	int a[8] = {15,22,14,26,32,9,16,8};
	int t = 53;
	//std::sort(&a,&a+8);
	vector<int> v;
	dp(v,0,0,t,a,8);
	return 0;
}
