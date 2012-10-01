class Solution {
	public:
		vector<string> dp(string digits, int i, string s, vector<string> v,map<int, string > m)
		{
			if(i==digits.size())
			{
				v.push_back(s);
				return v;
			}
			int j,d;
			d = digits[i]-'0';
			for(j=0;j<m[d].size();j++)
			{
				s = s + m[d][j];
				v = dp(digits,i+1,s,v,m);
				s = s.substr(0,s.size()-1);
			}
			return v;
		}
		vector<string> letterCombinations(string digits) {
			// Start typing your C/C++ solution below
			// DO NOT write int main() function
			map<int, string > m;
			vector<string> v;
			m[2] = "abc";
			m[3] = "def";
			m[4] = "ghi";
			m[5] = "jkl";
			m[6] = "mno";
			m[7] = "pqrs";
			m[8] = "tuv";
			m[9] = "wxyz";

			return dp(digits,0,"",v,m);
		}
};
