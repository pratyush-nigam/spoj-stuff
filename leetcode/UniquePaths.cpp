class Solution {
	public:
		int total(int i,int j, int m, int n,int sum)
		{
			if(i==n)
				return sum+1;
			if(j==m)
				return sum+1;
			return total(i+1,j,m,n,sum)+total(i,j+1,m,n,sum);
		}
		int uniquePaths(int m, int n) {
			// Start typing your C/C++ solution below
			// DO NOT write int main() function
			return total(1,1,m,n,0);
		}
};
