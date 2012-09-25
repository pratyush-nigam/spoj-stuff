class Solution {
	public:
		int dp(string s)
		{
			if(s.size()==0)
				return 1;
			else if(s.size() == 1 && s[0] > '0')
				return dp(s.substr(1));
			else
			{
				if(('1' <= s[0]  && s[0] <= '2') && ('0'<= s[1] && s[1] <= '6'))
				{
					return dp(s.substr(1)) + dp(s.substr(2)); 
				}
				else if(s[0] > '0')
					return dp(s.substr(1));
				else
					return 0;
			}
		}
		int numDecodings(string s) {
			// Start typing your C/C++ solution below
			// DO NOT write int main() function

			if(s.size()==0 || s[0] == '0')
				return 0;
			return dp(s);
		}
};
