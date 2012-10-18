class Solution {
	public:
		void rotate(vector<vector<int> > &matrix) {
			// Start typing your C/C++ solution below
			// DO NOT write int main() function
			int i,j,n=matrix.size();

			for(i=0;i<n/2;i++)
			{
				int first = i;
				int last = n-i-1;
				for(j=first;j<last;j++)
				{
					int offset = j-first;
					int tmp = matrix[first][j];
					matrix[first][j] = matrix[last-offset][first];
					matrix[last-offset][first] = matrix[last][last-offset];
					matrix[last][last-offset] = matrix[j][last];
					matrix[j][last] = tmp;
				}
			}
			return;
		}
};
