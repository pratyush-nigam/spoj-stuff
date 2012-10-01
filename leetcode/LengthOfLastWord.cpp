class Solution {
	public:
		int lengthOfLastWord(const char *s) {
			// Start typing your C/C++ solution below
			// DO NOT write int main() function
			int i=0,j=0;
			while(*s!='\0')
			{
				if(*s == ' ')
				{
					if(j>0)
						i=j;
					j=0;
					s++;
				}
				else
				{
					j++;
					s++;
				}
			}
			if(j>0)
				i = j;
			return i;
		}
};
