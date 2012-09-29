#include<cstdio>
#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

vector <string> solve(vector <string> board)
{
	int i,j,n=board.size();
	vector<string> v;
	int a[n];
	for(i=0;i<n;i++)
	{
		int c = 0;
		for(j=0;j<n;j++){

			if(board[i][j]=='C')
				c++;
		}
		a[i]=c;
	}
	for(i=n-1;i>=0;i--)
	{
		string s="";
		for(j=0;j<n;j++)
		{
			if(a[j]>0)
			{
				a[j]--;
				s = s+"C";
			}
			else
				s= s+'.';
		}
		v.push_back(s);
	}
	std::reverse(v.begin(),v.end());
	return v;
}

int main()
{
	solve({"C.C..C.C..C..C.",
			 "CCC...C..CCC.C.",
			  "......CC...CCCC",
			   ".C..CC.C.C.C.C.",
			    "C....C.C......C",
			     ".....C..CCCCC.C",
			      "CCC.......CCCCC",
			       "..C.C..C.C...C.",
			        "CCC....CCC.CC..",
				 "CC.CCCC.CCCC...",
				  ".C..C.CC.C.CC.C",
				   "C.CCCC..CC..C.C",
				    ".CCCC.CCCCCC...",
				     "..C...C.CCC.CC.",
				      "CCCC..CCC.C...."});
	return 0;
}
