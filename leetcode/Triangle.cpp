class Solution {
	public:
		int dp(int i,int j,vector<vector<int> > t,int sum)
		{
			if(i==0)
				return sum+t[i][j];
			if(j==t[i].size()-1)
				return dp(i-1,j-1,t,sum+t[i][j]);
			else
			{
				int d1=INT_MAX;
				if(j-1 >= 0)
					d1 = dp(i-1,j-1,t,sum+t[i][j]);
				return min(d1,dp(i-1,j,t,sum+t[i][j]));
			}
		}
		int minimumTotal(vector<vector<int> > &triangle) {
			// Start typing your C/C++ solution below
			// DO NOT write int main() function
			int i,a=INT_MAX;
			//int a[n];
			for(i=0;i<triangle.size();i++)
			{
				a = min(dp(triangle.size()-1,i,triangle,0),a);
			}
			return a;
		}
};
