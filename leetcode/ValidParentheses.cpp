class Solution {
	public:
		bool isValid(string s) {
			// Start typing your C/C++ solution below
			// DO NOT write int main() function
			int i;
			stack<char> st;
			for(i=0;i<s.size();i++)
			{
				if(s[i]=='[' || s[i]=='(' || s[i]=='{')
					st.push(s[i]);
				else
				{
					char c=' ';
					if(!st.empty())
						c = st.top();
					else
						return false;
					if((s[i]=='}' && c =='{')||(s[i]==']'&& c=='[')||(s[i]==')'&& c=='('))
						st.pop();
					else
						return false;
				}

			}
			return st.empty();
		}
};
