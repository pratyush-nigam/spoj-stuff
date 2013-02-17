class Solution {
	public:
		bool isPalindrome(string s) {
			// Start typing your C/C++ solution below
			// DO NOT write int main() function
			int i=0,j=s.size()-1,flg=1;

			while(i<j)
			{
				while(!isdigit(s[i]) && !isalpha(s[i]) && i<j)
					i++;
				while(!isdigit(s[j]) && !isalpha(s[j]) && i<j)
					j--;

				if((i<j && (s[i]==s[j] || s[j]-32==s[i] || s[i]-32==s[j])) || i==j)
				{
					i++;
					j--;
				}
				else
				{
					flg = 0;
					break;
				}
			}
			if(!flg)
				return 0;
			else
				return 1;
		}
};
