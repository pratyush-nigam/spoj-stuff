class Solution {
	public:
		bool checkpalindrome(string s,int i,int j)
		{
			while(i<j)
			{
				if(s[i]!=s[j])
					return 0;
				i++;
				j--;
			}
			return 1;
		}
		string dp(string s,int i,int j)
		{
			if(i>=j)
				return s.substr(i,j-i+1);
			if(checkpalindrome(s,i,j))
				return s.substr(i,j-i+1);
			else
			{
				string s1,s2;
				s1 = dp(s,i+1,j);
				s2 = dp(s,i,j-1);
				if(s1.size() > s2.size())
					return s1;
				else
					return s2;
			}
		}
		string longestPalindrome(string s) {
			// Start typing your C/C++ solution below
			// DO NOT write int main() function
			return dp(s,0,s.size()-1);
		}
};
