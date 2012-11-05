class Solution {
	public:
		int dp(int i, int j, string s, string t)
		{
			if(j==t.size() && i<=s.size())
				return 1;
			else if(j<t.size() && i==s.size())
				return 0;

			if(s[i]==t[j])
				return dp(i+1,j+1,s,t)+dp(i+1,j,s,t);
			else
				return dp(i+1,j,s,t);
		}
		int numDistinct(string S, string T) {
			// Start typing your C/C++ solution below
			// DO NOT write int main() function
			return dp(0,0,S,T);
		}
};
