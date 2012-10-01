class Solution {
	public:
		int dp(int A[], int n, int i, int count)
		{
			if(i==n-1)
				return count;
			else if(i>n-1)
				return 10000000;
			int j,m=10000000;
			for(j=A[i];j>=1;j--)
			{
				m = min(m,dp(A,n,i+j,count+1));
			}
			return m;
		}
		int jump(int A[], int n) {
			// Start typing your C/C++ solution below
			// DO NOT write int main() function
			return dp(A, n, 0, 0);
		}
};
