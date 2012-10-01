class Solution {
	public:
		string prefix(string s1,string s2)
		{
			int i=0;
			string s="";
			while(i<s1.size() && i<s2.size() &&s1[i]==s2[i])
			{
				s = s + s1[i];
				i++;
			}
			return s;
		}
		string longestCommonPrefix(vector<string> &strs) {
			// Start typing your C/C++ solution below
			// DO NOT write int main() function
			int i=1;
			string s="";
			if(strs.size() > 0)
			{
				s = strs[0];
				while(i<strs.size())
				{
					s = prefix(s,strs[i]);
					i++;
				}
			}
			return s;
		}
};
