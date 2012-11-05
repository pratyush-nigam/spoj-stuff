#include<cstdio>
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int lcs(string a, string b,int i, int j)
{
	if(i==0||j==0)
		return 0;
	if(a[i-1]==b[j-1])
		return 1+lcs(a,b,i-1,j-1);
	else
		return max(lcs(a,b,i-1,j),lcs(a,b,i,j-1));
}

int main()
{
	string a = "ABCDGH", b = "AEDFHR";
	printf("%d\n",lcs(a,b,a.size(),b.size()));
	return 0;
}
