class Solution {
	public:
		bool searchMatrix(vector<vector<int> > &matrix, int target) {
			// Start typing your C/C++ solution below
			// DO NOT write int main() function
			int i = 0, j = matrix[0].size()-1;
			vector<vector<int> > a = matrix;
			while(i<a.size() && j>=0)
			{
				if(a[i][j]==target)
					return true;
				else if(a[i][j] > target)
					j--;
				else
					i++;
			}
			return false;
		}
};
