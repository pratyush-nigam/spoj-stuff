class Solution {
	public:
		int dp(int i,int j, int sum, vector<vector<int> > grid)
		{
			if(i == grid.size() && j == grid[0].size())
				return sum;

			if(i+1 == grid.size())
			{
				while(j<grid[0].size())
					sum = sum + grid[i][j++];
				return sum;
			}
			if(j+1 == grid[0].size())
			{
				while(i<grid.size())
					sum = sum + grid[i++][j];
				return sum;
			}
			return min(dp(i+1,j,sum+grid[i][j],grid),dp(i,j+1,sum+grid[i][j],grid));

		}
		int minPathSum(vector<vector<int> > &grid) {
			// Start typing your C/C++ solution below
			// DO NOT write int main() function
			return dp(0,0,0,grid);
		}
};
