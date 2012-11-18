class Solution {
	public:
		string longestCommonPrefix(vector<string> &strs) {
			// Start typing your C/C++ solution below
			// DO NOT write int main() function
			if(strs.size()==0)
				return "";
			int i;
			string s = strs[0];
			for(i=1;i<strs.size();i++)
			{
				int j;
				string st="";
				for(j=0;j<strs[i].size() && j<s.size();j++)
				{
					if(s[j]!=strs[i][j])
						break;
					else
						st = st + s[j];
				}
				s = st;
			}
			return s;
		}
};
