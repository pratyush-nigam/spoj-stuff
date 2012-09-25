class Solution {
	public:
		int longestValidParentheses(string s) {
			// Start typing your C/C++ solution below
			// DO NOT write int main() function
			int st=0, cur=0,i,res=0;
			for(i=0;i<s.size();i++)
			{
				cur = cur + 1;

				if(s[i]=='(')
					st++;
				else if(s[i]==')')
					st--;
				if(st==0)
					res = max(res,cur);
				else if(st<0)
				{
					st=0;
					cur=0;
				}
			}
			st=cur=0;
			for(i=s.size()-1;i>=0;i--)
			{
				cur = cur + 1;

				if(s[i]=='(')
					st--;
				else if(s[i]==')')
					st++;
				if(st==0)
					res = max(res,cur);
				else if(st<0)
				{
					st=0;
					cur=0;
				}
			}
			return res;
		}
};
