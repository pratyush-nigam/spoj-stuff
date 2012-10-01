#include<string>
#include<vector>
#include<iostream>
using namespace std;

bool checkPalindrome(string s, int i, int j)
{
	//int i=0,j=s.size()-1;
	while(i<j && s[i]==s[j])
	{
		i++;
		j--;
	}
	if(i>=j)
		return true;
	else
		return false;
}
string dp(string s, int i, int j)
{
	//cout << "i = " << i << " j = " << j << endl; 
	if(i>=j)
		return "";
	if(checkPalindrome(s,i,j))
		return s.substr(i,j-i+1);
	string x,y;
	x = dp(s,i+1,j);
	y = dp(s,i,j-1);
	if(x.size() > y.size())
		return x;
	else
		return y;
}
string longestPalindrome(string s) {
	// Start typing your C/C++ solution below
	// DO NOT write int main() function
	return dp(s,0,s.size()-1);
}

int main()
{
	cout<< longestPalindrome("abcbeia") << endl;
	return 0;
}
