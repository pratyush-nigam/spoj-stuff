class Solution {
	public:
		int lengthOfLongestSubstring(string s) {
			// Start typing your C/C++ solution below
			// DO NOT write int main() function
			int res = 0;
			int st=0,e=0;
			int a[26]={0};
			while(e<s.size())
			{
				if(a[s[e]-'a']==1)
				{
					res = max(res,e-st);
					while(s[st]!=s[e])
						a[s[st++]-'a'] = 0;
					st++;
					e++;
				}
				else
				{
					a[s[e]-'a'] = 1;
					e++;
				}
			}
			res = max(res,e-st);
			return res;
		}
};
