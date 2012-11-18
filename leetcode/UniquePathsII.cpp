class Solution {
	public:
		int dp(int i,int j,vector<vector<int> > a)
		{
			if(i>=0 && j>=0 && a[i][j]==1)
				return 0;
			if(i==0 && j==0 && a[i][j]==0)
				return 1;
			int d1=0,d2=0;
			if(i>0)
				d1=dp(i-1,j,a);
			if(j>0)
				d2=dp(i,j-1,a);
			return d1+d2;
		}
		int uniquePathsWithObstacles(vector<vector<int> > &obstacleGrid) {
			// Start typing your C/C++ solution below
			// DO NOT write int main() function
			return dp(obstacleGrid.size()-1,obstacleGrid[0].size()-1,obstacleGrid);
		}
};
