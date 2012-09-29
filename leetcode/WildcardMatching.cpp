class Solution {
	public:
		bool isMatch(const char *s, const char *p) {
			// Start typing your C/C++ solution below
			// DO NOT write int main() function
			if (*s == '\0') {
				if (*p == '\0') return true;
				if (*p == '*') return isMatch(s,p+1);
				return false;
			}
			if (*p == '\0') return false;
			if (*p == '?' || *p == *s) return isMatch(s+1, p+1);
			if (*p=='*') return isMatch(s+1,p) || isMatch(s, p+1);
			return false;
		}
};
