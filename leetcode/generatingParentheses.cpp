class Solution {
	public:

		vector<string> generate(string s, int n, vector<string> v,int open, int close)
		{
			if(s.size()/2==n){
				v.push_back(s);
				return v;
			}
			if(open > close)
			{
				v = generate(s + ")",n,v,open,close + 1);
			}
			if(open < n)
			{
				v = generate(s + "(",n,v,open+1,close);
			}
			return v;
		}
		vector<string> generateParenthesis(int n) {
			// Start typing your C/C++ solution below
			// DO NOT write int main() function
			vector<string> v;
			return generate("",n,v,0,0);
		}
};
