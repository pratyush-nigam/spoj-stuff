class Solution {
	public:
		bool dp(int A[], int n, int i)
		{
			if(i==n-1)
				return true;
			else if(i>n-1)
				return false;
			int j;
			bool t = 0;
			for(j=1;j<=A[i];j++)
			{
				t = t || dp(A,n,i+j);
			}
			return t;
		}
		bool canJump(int A[], int n) {
			// Start typing your C/C++ solution below
			// DO NOT write int main() function
			return dp(A,n,0);
		}
};
