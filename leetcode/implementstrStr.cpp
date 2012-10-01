class Solution {
	public:
		char *strStr(char *haystack, char *needle) {
			// Start typing your C/C++ solution below
			// DO NOT write int main() function
			if (!haystack || !needle) return haystack;
			int n = strlen(haystack);
			int m = strlen(needle);
			int i = 0;
			while (i < n-m+1) {
				int j = 0;
				while (j < m && haystack[i] == needle[j]) {
					i++;
					j++;
				}
				if (j == m) 
					return haystack+(i-j);
				i = i-j+1;
			}
			return NULL;
		}
};
