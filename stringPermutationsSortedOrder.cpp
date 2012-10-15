#include<cstdio>
#include<iostream>
#include<string>
using namespace std;

void printPermutation(string s,string y)
{
	if(s.size()==0)
	{
		cout << y << endl;
		return;
	}
	for(int i=0;i<s.size();i++)
	{

		y = y + s[i];
		s.erase(s.begin()+i);
		printPermutation(s,y);
		s.insert(s.begin()+i,y[y.size()-1]);
		y.erase(y.end()-1);
	}
	return;
}

int main()
{
	printPermutation("ABCD","");
	return 0;
}
