class Solution {
	public:
		int removeDuplicates(int A[], int n) {
			// Start typing your C/C++ solution below
			// DO NOT write int main() function
			if(n<2)
				return n;
			int i=1,j=0;
			int flg = 1;
			while(i<n)
			{
				if(A[i]!=A[j])
				{
					A[++j]=A[i++];
					flg = 1;
				}
				else
				{
					if(flg==1)
					{
						A[++j]=A[i++];
						flg = 0;
					}
					else
						i++;
				}
			}
			return j+1;
		}
};
