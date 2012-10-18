class Solution {
	public:
		int dp(int i, int j, vector<vector<int> > a,int sum)
		{
			if(i==0 && j==0)
				return sum+a[i][j];
			else if(i==0)
				return dp(i,j-1,a,sum+a[i][j]);
			else if(j==0)
				return dp(i-1,j,a,sum+a[i][j]);
			return min(dp(i,j-1,a,sum+a[i][j]),dp(i-1,j,a,sum+a[i][j]));
		}
		int minPathSum(vector<vector<int> > &grid) {
			// Start typing your C/C++ solution below
			// DO NOT write int main() function
			return dp(grid.size()-1,grid[0].size()-1,grid,0);
		}
};
