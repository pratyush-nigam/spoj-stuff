class Solution {
	public:
		int removeDuplicates(int A[], int n) {
			// Start typing your C/C++ solution below
			// DO NOT write int main() function
			int i=1,j=1;
			if(n<2)
				return n;
			while(i<n)
			{
				if(A[i]!=A[i-1])
				{
					A[j++] = A[i++];
				}
				else
					i++;
			}
			return j;
		}
};
