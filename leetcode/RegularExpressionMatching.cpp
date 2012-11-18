class Solution {
	public:
		bool isMatch(const char *s, const char *p) {
			// Start typing your C/C++ solution below
			// DO NOT write int main() function
			if(*p=='\0' && *s=='\0')
				return true;
			if(*(p+1)=='*' && *s=='\0')
				return isMatch(s,p+2);
			if(*p=='\0' || *s=='\0')
				return false;
			if(*(p+1)=='*')
			{
				if(*p=='.')
					return isMatch(s,p+2)||isMatch(s+1,p)||isMatch(s+1,p+2);
				if(*p!=*s)
					return isMatch(s,p+2);
				return isMatch(s+1,p) || isMatch(s,p+2);
			}
			if(*p=='.')
				return isMatch(s+1,p+1);
			if(*s!=*p)
				return false;
			return isMatch(s+1,p+1);

		}
};
